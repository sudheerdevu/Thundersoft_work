#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out | ios::app); // Open for read, write, and append
    if (!file) {
        cerr << "File could not be opened!" << endl;
        return 1;
    }

    // Write to the file
    file << "Appending a new line to the file." << endl;

    // Set the position back to the beginning for reading
    file.seekg(0);

    // Read from the file
    string line;
    cout << "Reading file contents:" << endl;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close(); // Close the file
    return 0;
}