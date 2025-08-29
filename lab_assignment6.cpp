#include<iostream>
using namespace std;
main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	if(num==0){
		cout<<"Number you Entered is ZERO!";
	}else if(num > 0){
		if(num % 2 == 0){
			cout<<"Number is Positive and Even!";
		}else{
			cout<<"Number is Positive and Odd!";
		}
	}else{
		cout<<"Number is Negative!!";
	}
}