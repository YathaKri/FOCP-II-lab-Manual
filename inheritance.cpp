#include <iostream>
#include <string>
using namespace std;


class Vehicle {
public:
    string brand = "Ford";
    int year = 2023;

    void showParent() {
        cout << "Parent function: I am a " << brand << " from " << year << endl;
    }
};


class Car : public Vehicle {
public:
    string model = "Mustang";
    int seatingCapacity = 4;

    void showChild() {
        cout << "Child function: This model is a " << model << " with " << seatingCapacity << " seats." << endl;
    }
};

int main() {
    Car myCar;

    myCar.showParent();

    myCar.showChild();

    return 0;
}