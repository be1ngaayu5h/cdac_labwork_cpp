#include<iostream>
using namespace std;
main(){
	int basic,hra,da,bonus,gross_sal;
	cout<<"Enter your basic salary: \n";
	cin>>basic;
	hra=(20*basic)/100;
	da=(15*basic)/100;
	bonus=(10*basic)/100;
	if(basic>50000){
	    gross_sal=basic+hra+da+bonus;
	}else{
		gross_sal=basic+hra+da;
	}
	cout<<"Your Gross Salary is: "<<gross_sal;
}