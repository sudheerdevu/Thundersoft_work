#include <iostream>
using namespace std;

int main() {
    int rows = 2, cols = 3;
    int **matrix = new int*[rows];

    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    // Initialize the dynamic array
    int value = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = value++;
        }
    }

    cout << "Dynamic 2D Array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}