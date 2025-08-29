/*
1. Number Properties Checker
Create a program that takes an integer as input and uses if-else if logic to check and 
print one of the following properties:
If the number is positive and even, print "The number is positive and even."
If the number is positive and odd, print "The number is positive and odd."
If the number is negative, print "The number is negative."
If the number is zero, print "The number is zero."
Hint: Use a single if-else if ladder. Check for the most specific conditions first.
For instance, check for zero first, then for a positive number, and within that check, 
use the modulus operator (%) to determine if it's even or odd.
*/
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