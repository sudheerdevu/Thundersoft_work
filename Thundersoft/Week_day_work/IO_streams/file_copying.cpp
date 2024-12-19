#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("source.txt");
    ofstream outFile("destination.txt");

    if (!inFile || !outFile) {
        cerr << "Error opening files!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        outFile << line << endl; // Copy line by line
    }

    cout << "File copied successfully." << endl;

    inFile.close();
    outFile.close();
    return 0;
}