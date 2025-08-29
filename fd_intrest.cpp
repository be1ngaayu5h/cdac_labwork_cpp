#include<iostream>
using namespace std;
main()
{
	int p,n;
	float r,si,amount;
	cout<<"Enter principal ammount for FD: ";
	cin>>p;
	cout<<"Enter rate of interst of FC: ";
	cin>>r;
	cout<<"Enter Duration of FD in years:";
	cin>>n;
	
	si=(p*r*n)/100;
	
	cout<< "Intrest you are getting after the dusration is : " <<si;
	amount=p+si;
	cout<<"amount you are getting after "<< n << "years is : " << amount;
	
	
}