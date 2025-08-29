#include <iostream>
using namespace std;

void convertAlternateToUpper(char str[])
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0 && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
    cout << "Converted string: " << str << endl;
}

main()
{
    char str[100];

    cout << "Enter a string: ";
    gets(str); 
    cout <<endl <<"\n\n\nOriginal string: " << str << endl;
    convertAlternateToUpper(str);
}
