/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include <iostream>
using namespace std;
int main() {
    int row = 5;
    int col = 1;
    for (int i = 1; i <= row; i++) { //outer loop
        for (int j = 1; j <= col; j++) { //inner loop
                cout << j;
        }
        cout << endl;
        col++;
    }
    return 0;
}