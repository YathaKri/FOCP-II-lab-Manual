#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    int vehicleNumber;
    double rentalPrice;
};

class Car : public Vehicle {
public:
    int numberOfSeats;
};

class Truck : public Vehicle {
public:
    double loadCapacity;
};

class RentalCar : public Car {
public:
    string carType;
};

int main() {
    RentalCar rc;
    rc.vehicleNumber = 202;
    rc.rentalPrice = 75.0;
    rc.numberOfSeats = 5;
    rc.carType = "SUV";

    Truck tr;
    tr.vehicleNumber = 303;
    tr.rentalPrice = 150.0;
    tr.loadCapacity = 5000.0;

    cout << "Rental Car Type: " << rc.carType << ", Seats: " << rc.numberOfSeats << endl;
    cout << "Truck Load: " << tr.loadCapacity << "kg" << endl;

    return 0;
}
