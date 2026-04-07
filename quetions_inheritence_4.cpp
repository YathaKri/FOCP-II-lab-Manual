#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
};

class Exam {
public:
    string subject;
    double marks;
};

class Result : public Student, public Exam {
public:
    void displayAllDetails() {
        cout << "Name: " << name << ", Roll: " << rollNumber 
             << ", Subject: " << subject << ", Marks: " << marks << endl;
    }
};