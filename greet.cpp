//add 2 numbers using function
#include<iostream>
using namespace std;

void greet(string message="Human"){
	cout<< "\nHello "<<message;
}

int main(){
	greet();
	greet("Aayush");	
}