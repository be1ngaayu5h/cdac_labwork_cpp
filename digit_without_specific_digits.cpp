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
	while(r_num>0){
		digit=r_num%10;
		if(digit!=3 && digit!=5)
		cout<<digit;
		r_num=r_num/10;
    }
	

}