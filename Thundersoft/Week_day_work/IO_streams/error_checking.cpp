#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("nonexistent.txt");

    if (!file) {
        cerr << "Error opening file!" << endl;
    }

    cout << "Stream good: " << file.good() << endl;
    cout << "End of file reached: " << file.eof() << endl;
    cout << "Logical error: " << file.fail() << endl;
    cout << "Read/write error: " << file.bad() << endl;

    return 0;
}