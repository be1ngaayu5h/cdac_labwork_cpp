#include <iostream>
using namespace std;
main()
{
	int a=1,even=0,odd=0,n;
	cout<<"\nEnter 5 numbers"<<endl;
	do{
		cout<<"\nEnter number: ";
		cin>>n;
		if (n%2==0)
		even=even+n;
		else
		odd=odd+n;
	a++;
	}while(a<=5);
	
	cout<< "\nodd number sum:" << odd;
	cout<< "\neven number sum: " << even;
}