/*
*
* *
* * *
* * * *
* * * * *
*/
#include <iostream>
using namespace std;
int main() {
    int row = 5;
    int col = 1;
    for (int i = 1; i <= row; i++) { //outer loop
        for (int j = 1; j <= col; j++) { //inner loop
                cout << "* ";
        }
        cout << endl;
        col++;
    }
    return 0;
}