#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    int speed;

public:
    Vehicle(int s) : speed(s) {}
    void displaySpeed() {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

// Intermediate derived class
class Car : public Vehicle {
protected:
    string brand;

public:
    Car(string b, int s) : Vehicle(s), brand(b) {}
    void displayBrand() {
        cout << "Brand: " << brand << endl;
    }
};

// Final derived class
class SportsCar : public Car {
private:
    int horsepower;

public:
    SportsCar(string b, int s, int hp) : Car(b, s), horsepower(hp) {}
    void display() {
        displayBrand();
        displaySpeed();
        cout << "Horsepower: " << horsepower << " HP" << endl;
    }
};

int main() {
    SportsCar car("Ferrari", 320, 600);
    car.display();
    return 0;
}