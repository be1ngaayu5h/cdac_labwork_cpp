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
	int total=0;
	float avg;
	struct employee emp[5];
	
	for(int i=0;i<5;i++){
	cout<<"Enter No." <<i<< " Employee Number, ename, Salary:- "<<endl;
	cin>>emp[i].eno>>emp[i].ename>>emp[i].salary;
	}
	
	for(int i=0;i<5;i++){
	cout<<"\nEmp Name: "<<emp[i].ename<<"\nEmp no:- "<<emp[i].eno<< "\n emp salary:- "<<emp[i].salary;
	total=total+emp[i].salary;
	}
	
	avg=total/5;
	cout<<"\nTotal salary= "<<total<<endl;
	cout<<"\nAvg salary= "<<avg<<endl;
	
	
	
}