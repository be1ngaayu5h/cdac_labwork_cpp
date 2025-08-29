/*
      1
     2 3
	4 5 6
   7 8 9 10
  11 12 13 14 15
*/
#include <iostream>
using namespace std;

int main() {
    int rows = 4;
    int num = 1;  
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";   
        }
        for (int j = 1; j <= i; j++) {
            cout << num << "  ";
            num++;
        }
        cout << endl;
    }
    return 0;
}