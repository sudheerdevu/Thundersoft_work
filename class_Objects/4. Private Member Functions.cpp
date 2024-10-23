#include <iostream>
using namespace std;

class Example {
private:
    void privateFunction() {
        cout << "Private Function called!" << endl;
    }

public:
    void callPrivateFunction() {
        privateFunction();  // Calling private function
    }
};

int main() {
    Example obj;
    obj.callPrivateFunction();  // Calls public function which accesses the private one
    return 0;
}