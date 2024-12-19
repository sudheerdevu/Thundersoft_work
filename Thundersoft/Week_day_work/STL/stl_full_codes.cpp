#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string str = "hello world";

    map<char, int> freq;

    for (char ch : str) {
        if (ch != ' ') {
            freq[ch]++;
        }
    }

    cout << "Character Frequencies:" << endl;
    for (auto &pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}