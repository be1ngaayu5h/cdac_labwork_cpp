#include <iostream>
using namespace std;
main()
{
	int a,n,sum=0,count=0;
	for(a=1;a<=5;a++)
	{
		cout<<"Enter a number: ";
		cin>>n;
		if (n>=0){
			sum=sum+n;
		}else{
			count=count+1;
		}
	}
	cout<< "Sum of positive numbers: "<<sum<<endl;
	cout<<"total negative numbers are: "<<count;
}