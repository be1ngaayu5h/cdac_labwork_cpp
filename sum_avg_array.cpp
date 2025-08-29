#include<iostream>
using namespace std;
main()
{
	int a[5],i,sum=0,avg;
	
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
	
	for(i=0;i<=4;i++)
	{
		sum = sum + a[i];
	}
	
	cout<< "SUM OF ARRAY ELEMENTS IS : "<< sum <<endl;
	avg=sum/5;
	cout<< "AVG OF ARRAY ELEMENTS IS : "<< avg;		
}