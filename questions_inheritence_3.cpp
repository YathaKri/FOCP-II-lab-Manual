#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;

    void displayDetails() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

class EBook : public Book {
public:
    double fileSize;
};

class PrintedBook : public Book {
public:
    int pageCount;
};