#include <iostream>
using namespace std;

void add(int x,int y)
{
	cout<<"Addition is: "<<x+y;
}
int addition(int p, int q)
{
	return(p+q);
}
main()
{
	int a,b;
	cout<<"Enter 2 Numbers: ";
	cin>>a>>b;
	add(a,b);
}