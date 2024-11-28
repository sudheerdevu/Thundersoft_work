#include <iostream>
using namespace std;

// Base class
class Device {
public:
    void powerOn() {
        cout << "Device powered on." << endl;
    }
};

// Intermediate base class 1
class Phone : virtual public Device {
public:
    void call() {
        cout << "Calling from phone..." << endl;
    }
};

// Intermediate base class 2
class Camera : virtual public Device {
public:
    void takePhoto() {
        cout << "Photo taken with camera." << endl;
    }
};

// Final derived class
class Smartphone : public Phone, public Camera {
public:
    void useSmartFeatures() {
        cout << "Using smart features." << endl;
    }
};

int main() {
    Smartphone smartphone;
    smartphone.powerOn();    // No ambiguity due to virtual inheritance
    smartphone.call();
    smartphone.takePhoto();
    smartphone.useSmartFeatures();

    return 0;
}