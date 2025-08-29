/* write a program which will print
 loan ammount, intrest ammount , payable loan , EMI ammount 
 take loan ammount , intrest rate and loan period from user
 */
 
 #include<iostream>
using namespace std;
main()
{
	int la,d ;
	float ir, in , pay ,  emi;
	
	cout<< "Enter loan Ammount: ";
	cin>>la;
	cout<<"\nEnter rate of intrest : ";
	cin>>ir;
	cout<<"Enter Loan Duration: ";
	cin>>d;
	in = la*ir*d /100;
	pay= la+in;
	cout<<" Intrest is " << in;
	cout<<"Ammount payable is " << pay;
	
	emi= (pay/d)/12;
	cout<< "\n EMI per month will be :" << emi;
}