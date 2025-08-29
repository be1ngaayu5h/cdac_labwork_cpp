/*
1
0 0
1 1 1
0 0 0 0
1 1 1 1 1  
*/
#include <iostream>
using namespace std;
int main() {
    int row = 5;
    int col = 1;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) { 
                cout << i%2;
        }
        cout << endl;
        col++;
    }
    return 0;
}