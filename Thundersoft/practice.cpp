#include <iostream>
using namespace std;

string reverse(string word) {
    // Characters count
    auto count = word.length();
    string result = "";
    for (int i = (int)count - 1; i >= 0; i--) {
        result += word[i];
    }
    return result;
}

int main() {
    string sReverse = reverse("string");
    // Output the reversed string
    cout << "sReverse is " << sReverse << endl;
    return 0;
}