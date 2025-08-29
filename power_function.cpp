#include <iostream>
using namespace std;
int power(int x, int y) {
    if(y==0){
    	return 1;
	}else{
		return x*power(x,y-1);
	}
}

int main() {
    int a, b;
    cout << "Enter number and its power: ";
    cin >> a >> b;
    cout << "Value of " << a << "^" << b << " is: " << power(a, b);
    return 0;
}
