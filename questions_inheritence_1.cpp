#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    int vehicleNumber;
    double rentalPrice;

    void displayDetails() {
        cout << "Vehicle Number: " << vehicleNumber << ", Price: " << rentalPrice << endl;
    }
};

class Car : public Vehicle {
public:
    int numberOfSeats;
    string carType;
};