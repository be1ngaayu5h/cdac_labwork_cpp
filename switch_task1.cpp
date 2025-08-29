#include <iostream>
using namespace std;
main()
{
	int a,ch;
	cout<< "\n Enter a Number : ";
	cin>>a;
	cout<<"MENU \n 1.Square \n 2.Cube \n";
	cout << "\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<< "Square of "<< a<<" is :  " << a*a;
			break;
		case 2:
			cout<< "Cube of "<< a<<" is :  " << a*a*a;
			break;
		default:
			cout<<" Enter a Valid choice Please!";
			break;		
			
	}
}