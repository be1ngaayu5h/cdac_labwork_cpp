/*
1 0 1 0
0 1 0 1
1 0 1 0
0 1 0 1
*/
#include <iostream>
using namespace std;
int main() {
    int row = 4;
    int col = 4;
    for (int i = 1; i <= row; i++) { //outer loop
        for (int j = 1; j <= col; j++) { //inner loop
                cout << (i + j) % 2 << " ";
        }
        cout << endl;
    }
    return 0;
}