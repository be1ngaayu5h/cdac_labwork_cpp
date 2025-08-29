#include<iostream>
using namespace std;

main(){
    int units, amount;
    cout << "Enter consumed units: ";
    cin >> units;
    if (units <= 100) {
        amount = units * 5;
    } else if (units <= 300) {
        amount = (units - 100) * 7 + 100 * 5;
    } else {
        amount = (units - 300) * 10 + 200 * 7 + 100 * 5;
    }
    cout << "Total bill amount: " << amount << " INR" << endl;
}
