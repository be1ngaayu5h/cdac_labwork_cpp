#include <iostream>
using namespace std;

void cube(int q)
{
    cout << "Cube of square is: " << q * q * q << endl;
}

int square(int p)
{
    return (p * p);
}

main()
{
    int a, ans;
    cout << "Enter a Number: ";
    cin >> a;
    ans = square(a);
    cout << "\nSquare is: " << ans << endl;
    cube(ans);
}
