#include<iostream>
using namespace std;

main() {
    int num, digit, r_num, temp;
    for (num = 100; num <= 999; num++) {
        temp = num;
        r_num = 0;  
        while (num > 0) {
            digit = num % 10;  
            r_num = r_num * 10 + digit;  
            num = num / 10;  
        }
        if (temp == r_num) {
            cout << temp << " is a palindrome\n";
        }
        num = temp; 
    }
}
