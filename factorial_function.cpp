#include <iostream>
using namespace std;
void factorial(int n)
{
    int b, fact = 1;
    for (b = n; b >= 1; b--) {
        fact = fact * b;
    }
    cout << "Factorial: " << fact << endl;
}
main()
{
    int n;
    cout << "Enter value: ";
    cin >> n;
    factorial(n); 
}