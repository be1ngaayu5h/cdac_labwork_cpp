/*
2. Digit Breakdown Menu
Write a menu-driven program that takes a number from the user. 
The menu should offer the following options:
Count Digits: Calculate and print the total number of digits in the number.
Sum of Digits: Calculate and print the sum of all digits.
Reverse a Number: Print the number in reverse.
Exit
The program should continue to display the menu and perform actions until the user chooses to exit.
Hint: Use a do-while loop to repeatedly display the menu. A switch statement is ideal for handling the user's choice. For all three calculations, you will need a while loop that continues as long as the number is greater than zero, breaking the number down digit by digit using the modulus (%) and integer division (/) operators.
*/
#include<iostream>
using namespace std;
main() {
    int num, choice;
    cout << "Please enter a number: ";
    cin >> num;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Count Digits in given number\n";
        cout << "2. Sum of digits in given number\n";
        cout << "3. Reverse the given number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int count = 0;
                int temp = num;
                while (temp != 0) {
                    temp /= 10;
                    count++;
                }
                cout << "Total digits: " << count << endl;
                break;
            }
            case 2: {
                int sum = 0;
                int temp = num;
                while (temp != 0) {
                    sum += temp % 10;
                    temp /= 10;
                }
                cout << "Sum of digits: " << sum << endl;
                break;
            }
            case 3: {
                int reverse = 0;
                int temp = num;
                while (temp != 0) {
                    reverse = reverse * 10 + temp % 10;
                    temp /= 10;
                }
                cout << "Reversed number: " << reverse << endl;
                break;
            }
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Please select a valid option from the given MENU.\n";
        }
    } while (choice != 4); 
}
