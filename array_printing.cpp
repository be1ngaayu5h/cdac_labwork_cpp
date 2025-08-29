#include<iostream>
using namespace std;
main()
{
	int a[5],i;
	
	cout<<"Enter 5 values in Array:  \n";
	for(i=0;i<=4;i++)
	{
		cin>>a[i];
	}
	
	cout<< "\nArray Printing";
	for(i=0;i<=4;i++)
	{
		cout<< "\n a["<<i<<"] = "<< a[i]<< endl;
	}
	
	cout<< "\n Reverse Array Printing";
	for(i=4;i>-1;i--)
	{
		cout<< "\na["<< i << "] = "<< a[i]<< endl;
	}
	
	
}