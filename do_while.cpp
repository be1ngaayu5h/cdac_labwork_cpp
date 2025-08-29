#include<iostream>
using namespace std;
main()
{
	int a=1,n;
	cout<<"Enter value for N: ";
	cin>>n;
	cout<< "\nSeries from 1 to "<<n<<endl;
	
	do{
		cout<<"\n"<<a;
		a++;
	}while(a<=n);
	

}