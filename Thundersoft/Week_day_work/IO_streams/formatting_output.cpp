#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159265358979;

    cout << "Default: " << pi << endl;
    cout << "Fixed: " << fixed << pi << endl;
    cout << "Precision (3): " << setprecision(3) << pi << endl;

    cout << "Right aligned with setw (10): " << setw(10) << pi << endl;
    cout << "Left aligned with setw (10): " << left << setw(10) << pi << endl;

    return 0;
}