#include <iostream>
using namespace std;
main()
{
	int a,b,ch;
	cout<< "\n Enter 2 Numbers : ";
	cin>>a>>b;
	cout<<"MENU \n 1.Add \n 2.Sub \n 3.Multi\n 4.Division \n";
	cout << "\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<< "Addition is :  " << a+b;
			break;
		case 2:
			cout<< "Subtraction is :  " << a-b;
			break;
		case 3:
			cout<< "Multiplication is :  " << a*b;
			break;
		case 4:
			cout<< "Division is : " << a/b;
			break;
		default:
			cout<<" Enter a Valid choice Please!";
			break;		
			
	}
}