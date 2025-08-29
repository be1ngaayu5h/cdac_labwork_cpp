#include<iostream>
using namespace std;
main(){
	int num,digit,sum=0;
	cout<<"Enter a number: ";
	cin>>num;
	while(num>0){
		digit=num%10;
		cout<<digit<<" ";
		num=num/10;
		sum=sum+digit;
	}
	cout<<"\nSum: ";
	cout<<sum;
}