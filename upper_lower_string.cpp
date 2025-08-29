#include <iostream>
using namespace std;

main() 
{
    char str[100];
    cout << "Enter a String: " << endl;
    gets(str);
    cout << "Main String: " << endl << str << endl;
    strupr(str);
    cout << "Upper String: " << endl << str << endl;
    strlwr(str);
    cout << "Lower String: " << endl << str << endl;
}