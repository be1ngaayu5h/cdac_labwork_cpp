#include <iostream>
using namespace std;
main()
{
	int n,temp,fact;
	fact=1;
	cout<<"Enter value : ";
	cin>>n;
	temp=n;
	while(temp>=1){
		fact=fact*temp;
		temp--;
	}
	
    cout<< "Facctorial of " << n<< " is "<< fact;
}