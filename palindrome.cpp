#include<iostream>
using namespace std;
main(){
	int temp,num,digit,r_num=0;
	cout<<"Enter a number: ";
	cin>>num;
	temp=num;
	while(num>0){
		digit=num%10;
		r_num=r_num*10+digit;
	    num=num/10;
	}
	cout<<"\nReverse no: ";
	cout<<r_num;
	if(temp==r_num){
		cout<<"\nNumber is palindrome";
	}else{
		cout<<"\nNumber is not palindrome";
	}