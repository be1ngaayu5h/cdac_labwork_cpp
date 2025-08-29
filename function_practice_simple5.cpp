//area of rectangle
#include <iostream>
#include <string>
using namespace std;
int calculate_area_rectangle(int length, int width) {
    return length * width;
}
int main() {
    cout << "Area of rectangle: " << calculate_area_rectangle(8, 3) << endl;
    return 0;
}