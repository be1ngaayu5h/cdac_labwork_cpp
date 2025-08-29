// calculate factorial of number given by user 
//using 1st for loop 4*3*2*1
//usign 2nd for loop  1*2*3*4


#include <iostream>
using namespace std;
main()
{
	int n,a,b,fact=1;
	cout<<"Enter value : ";
	cin>>n;
	
	for(b=n;b>=1;b--){
		fact=fact*b;
	}
	int fact1=1;
	for(a=1;a<=n;a++){
		fact1=fact1*a;
	}
	cout<<fact<<endl;
	cout<<fact1;
}



	