#include <iostream>
using namespace std;

main() 
{
    char str[100];
    int len, count = 0;

    cout << "Enter a String: " << endl;
    gets(str);

    cout << "String: " << endl << str;

    len = strlen(str);
    cout << "\n\nLength of String: " << len << endl;

    char ch;
    cout << "Enter character to search in string: ";
    cin >> ch; 

    for (int i = 0; i < len; i++) {
        if (ch == str[i]) {
            count++;
        }
    }

    cout << "\nCharacter '" << ch << "' occurred " << count << " times in the given string." << endl;

}
