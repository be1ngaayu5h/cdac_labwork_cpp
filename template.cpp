//using template create add to add int float string 
#include<iostream>
using namespace std;

template <typename t>
t add (t x, t y)
{
	return ( x+y );
}

int main()
{
	cout<<add<int>(4,6)<<endl;
	cout<<add<float>(3.45,5.73)<<endl;
	cout<<add<string>("Aayush ","Pardeshi")<<endl;
	return 0;
}