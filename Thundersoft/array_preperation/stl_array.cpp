#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> arr = {10, 20, 30, 40, 50};

    cout << "STL Array elements using for-each loop: ";
    for (int x : arr) {
        cout << x << " ";
    }

    cout << "\nAccess using .at(): " << arr.at(2) << endl;

    return 0;
}