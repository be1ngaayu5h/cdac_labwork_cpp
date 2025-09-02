/*
4.
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with the constructor having the three sides as its parameters.
*/
#include <iostream>
#include <cmath>
using namespace std;
class Triangle4 {
    int a, b, c;

public:
    Triangle4(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    void printAreaPerimeter() {
        int perimeter = a + b + c;
        float s = perimeter / 2.0;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "Area: " << area << ", Perimeter: " << perimeter << endl;
    }
};

int main() {
    Triangle4 t4(3, 4, 5);
    t4.printAreaPerimeter();
    return 0;
}