// 2. Check if a number is even
#include <iostream>
#include <string>
using namespace std;
bool is_even(int n) {
    return n % 2 == 0;
}
int main() {
    cout << "Is 10 even? " << (is_even(10) ? "Yes" : "No") << endl;
return 0;    
}
