#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Employee : public Person {
public:
    int employeeID;
    string department;
};

class Faculty : public Employee {
public:
    string subject;
    string designation;
};
int main() {
    Faculty f;
    f.name = "Dr. Smith";
    f.age = 45;
    f.employeeID = 5001;
    f.department = "Physics";
    f.subject = "Quantum Mechanics";
    f.designation = "Professor";

    cout << "Name: " << f.name << ", Dept: " << f.department 
         << ", Subject: " << f.subject << endl;

    return 0;
}