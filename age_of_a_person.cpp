// write a program scan age and tell person is minor,adult,senior citizen
#include<iostream>
using namespace std;
main()
{
	int age;
	cout<< "Enter age: ";
	cin>>age;
	if (age>=0 && age<18){
		cout<<"\nYou are a minor";
	}else if (age>=18 && age<60){
		cout<<"\nYou are an Adult";
	}else if(age>=60 && age<=150){
		cout<<"\nYou are a Senior Citizen";
	}else{
		cout<<"\nDamm Bro! You are too old to be alive";
	}
}