#include <iostream>
#include <string>

using namespace std;


class Vehicle {
protected:
    string brand;
public:
    Vehicle(string b) : brand(b) {}
    void showVehicle() { cout << "Brand: " << brand << endl; }
};


class Car : public Vehicle {
protected:
    int doors;
public:
    Car(string b, int d) : Vehicle(b), doors(d) {}
    void showCar() {
        showVehicle();
        cout << "Doors: " << doors << endl;
    }
};


class ElectricCar : public Car {
    int batteryCapacity;
public:
    ElectricCar(string b, int d, int bat) : Car(b, d), batteryCapacity(bat) {}
    void showElectricCar() {
        showCar();
        cout << "Battery: " << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    ElectricCar myCar("Tesla", 4, 100);
    myCar.showElectricCar();
    return 0;
}