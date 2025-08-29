/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9   
*/
#include <iostream>
using namespace std;
int main() {
    int row = 5;
    int col = 1;
    for (int i = 1; i <= row; i++) {
	    int a=i ;
        for (int j = 1; j <= col; j++) { 
                cout << a;
                a++;
        }
        cout << endl;
        col++;
    }
    return 0;
}