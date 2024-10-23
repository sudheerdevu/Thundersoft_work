#include <iostream>
using namespace std;

class Resource {
public:
    Resource() {
        cout << "Resource acquired!" << endl;
    }

    ~Resource() {  // Destructor
        cout << "Resource released!" << endl;
    }
};

int main() {
    Resource res;  // Resource acquired
    // Resource will be released automatically when it goes out of scope
    return 0;
}