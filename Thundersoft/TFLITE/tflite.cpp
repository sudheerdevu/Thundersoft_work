#include <tensorflow/lite/model.h>
#include <tensorflow/lite/interpreter.h>
#include <tensorflow/lite/kernels/register.h>
#include <tensorflow/lite/delegates/gpu/delegate.h>
#include <iostream>
#include <vector>
#include <fstream>

// Model path
const char* model_path = "mobilenet_v2.tflite";

int main() {
    // Step 1: Load the TFLite Model (FlatBuffer Format)
    std::unique_ptr<tflite::FlatBufferModel> model = tflite::FlatBufferModel::BuildFromFile(model_path);
    if (!model) {
        std::cerr << "Error: Failed to load the TFLite model!" << std::endl;
        return -1;
    }
    std::cout << "Model Loaded Successfully!" << std::endl;

    // Step 2: Create Interpreter with Built-in Operations
    tflite::ops::builtin::BuiltinOpResolver resolver;
    std::unique_ptr<tflite::Interpreter> interpreter;

    if (tflite::InterpreterBuilder(*model, resolver)(&interpreter) != kTfLiteOk) {
        std::cerr << "Error: Failed to create TFLite Interpreter!" << std::endl;
        return -1;
    }
    std::cout << "Interpreter Initialized!" << std::endl;

    // Step 3: Register GPU Delegate (Optional for Acceleration)
    TfLiteGpuDelegateOptionsV2 gpu_options = TfLiteGpuDelegateOptionsV2Default();
    TfLiteDelegate* gpu_delegate = TfLiteGpuDelegateV2Create(&gpu_options);

    if (interpreter->ModifyGraphWithDelegate(gpu_delegate) != kTfLiteOk) {
        std::cerr << "Warning: Failed to apply GPU delegate. Running on CPU!" << std::endl;
    } else {
        std::cout << "GPU Delegate Registered Successfully!" << std::endl;
    }

    // Step 4: Allocate Tensor Memory
    if (interpreter->AllocateTensors() != kTfLiteOk) {
        std::cerr << "Error: Failed to allocate tensor memory!" << std::endl;
        return -1;
    }
    std::cout << "Memory Allocated for Tensors!" << std::endl;

    // Step 5: Set Input Tensor Data (Dummy Image Data)
    int input_index = interpreter->inputs()[0];
    TfLiteTensor* input_tensor = interpreter->tensor(input_index);

    // Fill input tensor with dummy normalized pixel values
    std::vector<float> input_data(224 * 224 * 3, 0.5f);  // Normalized pixel values (0 to 1)
    memcpy(input_tensor->data.f, input_data.data(), input_data.size() * sizeof(float));
    std::cout << "Input Data Loaded!" << std::endl;

    // Step 6: Execute Model (Inference)
    if (interpreter->Invoke() != kTfLiteOk) {
        std::cerr << "Error: Model inference failed!" << std::endl;
        return -1;
    }
    std::cout << "Inference Completed!" << std::endl;

    // Step 7: Retrieve Output Data
    int output_index = interpreter->outputs()[0];
    TfLiteTensor* output_tensor = interpreter->tensor(output_index);

    // Read output values (for classification, it's probabilities)
    float* output_data = output_tensor->data.f;
    std::cout << "Model Prediction: " << output_data[0] << std::endl;

    // Step 8: Cleanup GPU Delegate (if used)
    if (gpu_delegate) {
        TfLiteGpuDelegateV2Delete(gpu_delegate);
    }

    return 0;
}