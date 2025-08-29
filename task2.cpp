#include<iostream>
using namespace std;
main()
{
	int year;
	cout<< "Enter number of years to calculate:  ";
	cin>> year;
	cout<< "\nYear: "<<year;
	cout<< "\nMonths: "<< year*12;
	cout<< "\nDays:  "<< year*365;	
}