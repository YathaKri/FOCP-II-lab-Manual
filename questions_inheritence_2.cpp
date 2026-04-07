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