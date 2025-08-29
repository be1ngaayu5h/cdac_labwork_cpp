#include<iostream>
using namespace std;
main()
{
	int a[6],i;
	int positive[6],negative[6];
	cout<<"Enter 6 values in Array:  \n";
	for(i=0;i<=5;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<=5;i++)
	{
		positive[i]=0;
		negative[i]=0;
	}
	
	for(i=0;i<=5;i++)
	{
		if(a[i]>0){
			positive[i]=a[i];
		}else{
			negative[i]=a[i];
		}
	}
	cout<< "Positive Numbers";
		for(i=0;i<=5;i++)
	{
		cout<< "\n a["<<i<<"] = "<< positive[i]<< endl;
	}
	cout<< "\n\n Negative Numbers";
	for(i=0;i<=5;i++)
	{
		cout<< "\n a["<<i<<"] = "<< negative[i]<< endl;
	}
}