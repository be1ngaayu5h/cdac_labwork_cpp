#include <iostream>
using namespace std;

main() {
    int num, digit, r_num, temp, index = 0;
    int a[20]; 

    for (num = 100; num <= 200; num++) {
        temp = num;
        r_num = 0;

        while (temp > 0) {
            digit = temp % 10;
            r_num = r_num * 10 + digit;
            temp = temp / 10;
        }

        if (r_num == num) {
            a[index] = num; 
            index++;
        }
    }

    for (int i = 0; i < index; i++) {
        cout << "Palindrome from 100 to 200 at index a[" << i << "] is: " << a[i] << endl;
    }
}
