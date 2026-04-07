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
int main() {
    Result res;
    res.name = "Yatharth";
    res.rollNumber = 24;
    res.subject = "Engineering Physics";
    res.marks = 95.0;

    res.displayAllDetails();

    return 0;
}