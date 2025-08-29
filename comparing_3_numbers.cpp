// write a program scan 3 number and print largest number

#include<iostream>
using namespace std;
main()
{
	int x,y,z;
	cout<< "Enter 3 nos. : ";
	cin>>x>>y>>z;
	if (x>y && x>z)
	{
	cout<< "\n1st number is larger" << "\nwhich is : "<< x;
	} else if(y>x && y>z) {
	cout<< "\n2nd number is larger"<< "\nwhich is : "<< y;
	}else{
	cout<< "\n3rd number is larger"<< "\nwhich is : "<< z;
	}
}