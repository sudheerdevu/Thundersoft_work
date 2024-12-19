#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("example.txt"); // Open a file for reading
    if (!inFile) {
        cerr << "File could not be opened for reading!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) { // Read the file line by line
        cout << line << endl;
    }
    inFile.close(); // Close the file
    return 0;
}