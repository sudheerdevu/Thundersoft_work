#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt"); // Create and open a file
    if (!outFile) {
        cerr << "File could not be opened for writing!" << endl;
        return 1;
    }

    outFile << "Hello, this is a test file." << endl;
    outFile << "This is the second line." << endl;
    outFile.close(); // Close the file

    cout << "Data written to file successfully." << endl;
    return 0;
}