/*
7.Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'return Area'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through
keyboard.
*/
#include <iostream>
using namespace std;
class Area7 {
    int length, breadth;

public:
    Area7(int l, int b) {
        length = l;
        breadth = b;
    }

    int returnArea() {
        return length * breadth;
    }
};

int main() {
    int l, b;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;

    Area7 rect(l, b);
    cout << "Area: " << rect.returnArea() << endl;
    return 0;
}