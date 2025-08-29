/*
triangle type checker
take 3 sides as input 
determine equilatral(all side equal) , isosceles(two side equal) , scalene (all side different) or
not a trinagle (sum of 2 sides should be greater than third side
*/
#include<iostream>
using namespace std;
int main() {
    float side1, side2, side3;
    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        cout << "Sides should be positive numbers!" << endl;
    }
    else if (side1 + side2 <= side3 || side2 + side3 <= side1 || side3 + side1 <= side2) {
        cout << "Not a triangle! The sum of any two sides must be greater than the third side." << endl;
    }
    else {
        if (side1 == side2 && side2 == side3) {
            cout << "Equilateral triangle (All sides are equal)" << endl;
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "Isosceles triangle (Two sides are equal)" << endl;
        }
        else {
            cout << "Scalene triangle (All sides are different)" << endl;
        }
    }
}
