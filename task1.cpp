/*write a program define a variable 
input value for a 
print the value of a variable
update the value of a variable a
original value + half of original value 
(dont use another variable)
*/

#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"Enter value of A: ";
	cin>> a;
	cout<<"Value of A before updation:"<<a;
a=a+(a/2);
	cout<<"value of A after updation: "<<a;
}