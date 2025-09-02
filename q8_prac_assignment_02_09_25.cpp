/*
8.Print the average of three numbers entered by the user by creating a class named 'Average' having a
function to calculate and print the average without creating any object of the Average class.
*/

#include <iostream>
using namespace std;
class Average8 {
public:
    static void calculateAverage(float a, float b, float c) {
        float avg = (a + b + c) / 3;
        cout << "Average: " << avg << endl;
    }
};

int main() {
    float x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    Average8::calculateAverage(x, y, z);
    return 0;
}