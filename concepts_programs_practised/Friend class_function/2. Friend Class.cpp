#include <iostream>
using namespace std;

class Engine;  // Forward declaration

class Car {
private:
    int fuelLevel;

public:
    Car(int fuel) : fuelLevel(fuel) {}

    // Declare Engine as a friend class
    friend class Engine;
};

class Engine {
public:
    void showFuelLevel(const Car& car) {
        cout << "Fuel level: " << car.fuelLevel << endl;
    }
};

int main() {
    Car myCar(100);
    Engine myEngine;
    myEngine.showFuelLevel(myCar);  // Engine class can access Car's private members

    return 0;
}