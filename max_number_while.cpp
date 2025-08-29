#include <iostream>
using namespace std;
main()
{
	int n,a=1,max=0;
	cout<<"Enter 5 numbers"<<endl<<endl;
	while(a<6){
		cout<<"Enter number";
		cin>>n;
		if(n>max)
		max=n;
		a++;
	}
	cout<<"\n Max number is: "<<max;`
}