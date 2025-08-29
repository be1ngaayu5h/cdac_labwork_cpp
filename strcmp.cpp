#include <iostream>
using namespace std;

main() 
{
    char str[150],str1[50];
    cout << "Enter first String: " << endl;
    gets(str);
    
    cout << "Enter seocnd String: " << endl;
    gets(str1);
    
    if(strcmp(str,str1)==0)
    {
    	cout<<"\n Strings are similar";
	}else{
		cout<<"\n Strings are different";
	}
}