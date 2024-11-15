#include <iostream>
#include <cstring> // For strcmp
using namespace std;

int main() {
    int i = 0;
    char *ptr[10] = {"books", "television", "computer", "sports"};
    char str[25];

    cout << "Enter favorite pursuit: ";
    cin >> str;

    // Check if the pursuit is available
    for (i = 0; i < 4; i++) {
        if (strcmp(str, ptr[i]) == 0) { // Compare input with items in the array
            cout << "Your favorite pursuit \"" << str << "\" is available." << endl;
            break;
        }
    }

    // If not found
    if (i == 4) {
        cout << "Your favorite pursuit \"" << str << "\" is not available." << endl;
    }

    return 0;
}