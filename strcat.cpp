#include <iostream>
using namespace std;

main() 
{
    char str[150],str1[50];
    cout << "Enter first String: " << endl;
    gets(str);
    cout << "Enter second String: " << endl;
    gets(str1);
    cout << "\n\nFirst String: " << endl << str << endl;
    cout << "\n\nSecond String: " << endl << str1 << endl;
    
    strcat(str,str1);
    cout << "\n\nJoined String after 'strcat()'': " << endl << str << endl;
}
