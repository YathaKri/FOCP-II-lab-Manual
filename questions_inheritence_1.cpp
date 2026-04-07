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
int main() {
    Car myCar;
    myCar.vehicleNumber = 1001;
    myCar.rentalPrice = 50.0;
    myCar.numberOfSeats = 4;
    myCar.carType = "Sedan";

    myCar.displayDetails();
    cout << "Seats: " << myCar.numberOfSeats << ", Type: " << myCar.carType << endl;

    return 0;
}