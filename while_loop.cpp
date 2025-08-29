#include <iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter a number to print series \n";
	cin>>n;
	int a=1;
	cout<< "\n-----------1 to " << n << "---------";
	while (a<=n){
		cout<< "\n" << a;
		a++;
	}
	
	a=10;
	cout<< "\n-----------10 to "<< n << "---------";
	while (a>=n){
		cout<< "\n" << a;
		a--;
	}
}
