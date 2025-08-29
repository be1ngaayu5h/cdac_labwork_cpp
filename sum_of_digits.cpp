#include <iostream>
using namespace std;
main()
{
	int n,sum=0;
	cout<<"\nEnter a Number: ";
	cin>>n;
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	cout<<"\nSum of Digits is: "<<endl<<sum;
}