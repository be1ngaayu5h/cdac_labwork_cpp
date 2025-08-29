//GCD of 2 numbers
#include <iostream>
using namespace std;
int gcd(int x, int y) {
		if(x%y==0)
		return y;
		else
		return gcd(y,x%y);
}

int main() {
    int a, b;
    cout << "Enter 2 number: ";
    cin >> a >> b;
    if (a<b)
    cout << "GCD of 2 numbers is:  "<<gcd(b, a);
    else
    cout << "GCD of 2 numbers is:  "<<gcd(a, b);
	return 0;
}