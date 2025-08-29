#include<iostream>
using namespace std;
main(){
	int num,digit,r_num=0;
	cout<<"Enter a number: ";
	cin>>num;
	
	while(num>0){
		digit=num%10;
		r_num=r_num*10+digit;
	    num=num/10;
	}
	cout<<"\nReverse no: ";
	cout<<r_num;
	
}