//Problem: Define a function convert_celsius_to_fahrenheit that takes a temperature in Celsius and returns it 
//in Fahrenheit. (Formula: F = C * 9/5 + 32)
#include<iostream>
using namespace std;

int celsius_to_fahrenheit(int temp){
	int f;
	f= temp*9/5+32;
	return f;
}

main()
{
	int temp_c;
	cout<<"Enter temprature in celsius: ";
	cin>>temp_c;
	cout<<endl<<"Temprature in Fahrenheit is: "<<celsius_to_fahrenheit(temp_c);-
}