#include <bits/stdc++.h> // Includes all standard headers
using namespace std;

int main() {
    vector<int> v; // Declare a vector of integers
    v.push_back(10); // Add elements to the vector
    v.push_back(20);
    v.push_back(30);
/*
    // Print the elements of the vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

  

    return 0;
*/

    v.emplace_back(40);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
