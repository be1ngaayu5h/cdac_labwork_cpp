#include <iostream>
using namespace std;
main()
{
	int n,a=0,b=1,f=1;
	cout<<"Enter numbers\n";
	cin>>n;
	cout<<"Fibonacci Series\n"; 
	cout<<a<<endl;
	cout<<b<<endl;
	while(f<=n){
		cout<<f<<endl;
		a=b;
		b=f;
		f=a+b;
	}
}