#include <iostream>
using namespace std;
main()
{
	int n;
	cout<< "Enter a number for its table: \n";
	cin>>n;
	int a=1;
	while(a<11){
		cout<<"\n"<< n << " * "<< a << " = "<< a*n << endl;
		a++;
	}
}