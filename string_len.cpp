#include <iostream>
#include <cstring> // for strlen
using namespace std;

 main() 
{
    char str[100];
    int len;

    cout << "Enter a String: " << endl;
    gets(str);

    cout << "String: " << endl << str;

    len = strlen(str);
    cout << "\n\nLength of String: " << endl << len;

    for (int i = 0; i < len; i++) {
        cout << "\nstr[" << i << "] = " << str[i];
    }

}
