#include <iostream>
using namespace std;

class Triangle {
private:
    float base;
    float height;

public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    float area() {
        return 0.5 * base * height;
    }

    void displayArea() {
        cout << "Area of the triangle: " << area() << endl;
    }
};

int main() {
    float b, h;

    cout << "Enter base of the triangle: ";
    cin >> b;
    cout << "Enter height of the triangle: ";
    cin >> h;

    Triangle t(b, h);

    t.displayArea();

    return 0;
}