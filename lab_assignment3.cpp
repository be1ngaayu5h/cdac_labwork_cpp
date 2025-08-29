/*
initial bal = 10000;
user enter ammount to withdraw
check if ammount is multiple of 100s or not , if not tell user to enter aamount multiple of 100
check ammount is less than balance or prompt issuficiant balance
print balance after withdrawal
*/

#include<iostream>
using namespace std;

int main() {
    int balance = 10000;  
    int withdrawAmount;

    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;

    if (withdrawAmount % 100 != 0) {
        cout << "Please enter an amount that is a multiple of 100!" << endl;
    }

    else if (withdrawAmount > balance) {
        cout << "Insufficient balance!" << endl;
    }
    else {

        balance -= withdrawAmount;
        cout << "Transaction successful!" << endl;
        cout << "You have withdrawn " << withdrawAmount << " \nPlease Collect the cash!\n";
        cout << "Remaining balance: " << balance << " INR" << endl;
    }
}
