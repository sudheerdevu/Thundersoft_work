#include <iostream>
using namespace std;

class Car {
public:
    Car() { cout << "Car created." << endl; }
    ~Car() { cout << "Car destroyed." << endl; }
    void drive() { cout << "Driving the car!" << endl; }
};

int main() {
    // Dynamically create a Car object
    Car* myCar = new Car();
    myCar->drive();

    // Free memory allocated for Car object
    delete myCar;

    return 0;
}
