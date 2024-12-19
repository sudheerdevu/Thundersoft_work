#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> myMap;

    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";

    myMap.erase(2); // Remove key-value pair

    cout << "Map elements:" << endl;
    for (auto &pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}