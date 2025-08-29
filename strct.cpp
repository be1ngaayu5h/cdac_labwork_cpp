#include<iostream>
using namespace std;

struct employee
{
	int eno;
	char ename[20];
	int salary;
};

main()
{
	struct employee e1,jack;
	cout<<"Enter Employee Number, ename, Salary:- "<<endl;
	cin>>e1.eno>>e1.ename>>e1.salary;
	
	
	cout<<"\nEmp Name: "<<e1.ename<<"\nEmp no:- "<<e1.eno<< "\n emp salary:- "<<e1.salary;
	
	
	cout<<endl<<"Enter 2nd Employee Number, ename, Salary:- "<<endl;
	cin>>jack.eno>>jack.ename>>jack.salary;
	
	
	cout<<"\nEmp Name: "<<jack.ename<<"\nEmp no:- "<<jack.eno<< "\n emp salary:- "<<jack.salary;
	
	
}