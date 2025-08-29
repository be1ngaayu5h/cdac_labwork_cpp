#include<iostream>
using namespace std;
main()
{
	int a[5],i,max=0,max_i;
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
	
	for (i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			max_i=i;
		}
	}
	
	cout<<"Maximum Number in Array is  "<< max << " which is at index number "<< max_i<< endl;
}