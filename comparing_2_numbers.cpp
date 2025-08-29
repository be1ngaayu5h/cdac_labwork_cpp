// write a program scan 2 number and print largest number

#include<iostream>
using namespace std;
main()
{
	int x,y;
	cout<< "Enter 2 nos. : ";
	cin>>x>>y;
	if (x>y)
	{
		cout<< "\n1st numver is larger" << "\nwhich is : "<< x;
	} else {
		cout<< "\n2nd number is larger"<< "\nwhich is : "<< y;
	}
}