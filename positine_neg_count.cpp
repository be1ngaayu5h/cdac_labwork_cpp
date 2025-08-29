#include<iostream>
using namespace std;
main()
{
	int a[6],i,positive_c=0,negative_c=0;
	cout<<"Enter 6 values in Array:  \n";
	for(i=0;i<=5;i++)
	{
		cin>>a[i];
	}
	

	for(i=0;i<=5;i++)
	{
		if(a[i]>0){
			positive_c=positive_c+1;
		}else{
			negative_c=negative_c+1;
		}
	}
	
	cout<<"count of positive numbers is : "<< positive_c<<endl;
	cout<<"count of negative numbers is : "<< negative_c;

}