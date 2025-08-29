#include <iostream>
using namespace std;

main() 
{
    char str[100],str1[100];
    cout << "Enter a String: " << endl;
    gets(str);
    cout << "First String: " << endl << str << endl;
    strcpy(str1,str);
    cout << "Second String: " << endl << str1 << endl;
}