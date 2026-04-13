#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
    int marks;

    public:
    Student(){
        marks = 85;
    }

    friend void show(Student );
};

void show(Student s){
    cout << "Marks : " << s.marks << endl;
}

int main(){
    Student s1;
    show(s1);
    
    
}