/*
3.Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with a function to print the area and perimeter.
*/
#include <iostream>
#include <cmath>
using namespace std;

class Triangle3 {
public:
    int a = 3, b = 4, c = 5;

    void printAreaPerimeter() {
        int perimeter = a + b + c;
        float s = perimeter / 2.0;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "\nArea of Triangle is: " << area << "\nPerimeter of Triangle is: " << perimeter << endl;
    }
};

int main() {
    Triangle3 tri;
    tri.printAreaPerimeter();
    return 0;
}