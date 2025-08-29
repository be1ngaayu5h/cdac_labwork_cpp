#include<iostream>
using namespace std;

main() {
    int num, digit, r_num = 0;
    cout << "Enter a number: ";
    cin >> num;
    
    int temp = num; 

    while(num > 0){
        digit = num % 10;
        r_num = r_num * 10 + digit;
        num = num / 10;
    }


    while(r_num > 0){
        digit = r_num % 10;
        switch(digit){
            case 1:
                cout << "ONE ";
                break;
            case 2:
                cout << "TWO ";
                break;
            case 3:
                cout << "THREE ";
                break;
            case 4:
                cout << "FOUR ";
                break;
            case 5:
                cout << "FIVE ";
                break;
            case 6:
                cout << "SIX ";
                break;
            case 7:
                cout << "SEVEN ";
                break;
            case 8:
                cout << "EIGHT ";
                break;
            case 9:
                cout << "NINE ";
                break;
            case 0:
                cout << "ZERO ";
                break;
        }
        r_num = r_num / 10;  
    }


}
