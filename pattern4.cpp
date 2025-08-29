 /*
ABCD
BCDE
CDEF
DEFG
 */
#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int cols = 5;
    for (int i = 0; i < rows; i++) {
        char start = 'A' + i;
        for (int j = 0; j < cols; j++) {
            cout << start;
            start++;
        }
        cout << endl;
    }
    return 0;
}