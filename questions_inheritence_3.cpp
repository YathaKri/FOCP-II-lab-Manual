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
int main() {
    EBook ebook;
    ebook.title = "Digital Era";
    ebook.author = "John Doe";
    ebook.fileSize = 15.5;

    PrintedBook pbook;
    pbook.title = "Hardcover History";
    pbook.author = "Jane Smith";
    pbook.pageCount = 350;

    ebook.displayDetails();
    cout << "File Size: " << ebook.fileSize << "MB" << endl;

    pbook.displayDetails();
    cout << "Pages: " << pbook.pageCount << endl;

    return 0;
}