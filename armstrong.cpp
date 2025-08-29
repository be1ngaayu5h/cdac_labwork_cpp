#include<iostream>
using namespace std;
main() {
    int num, digit, sum = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    while (temp > 0) {
        digit = temp % 10;  
        sum = sum + (digit * digit * digit);  
        temp = temp / 10; 
    }
    if (sum == num) {
        cout << "It is an Armstrong number";
    } else {
        cout << "It is not an Armstrong number";
    }
}