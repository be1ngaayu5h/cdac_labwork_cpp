#include<iostream>
using namespace std;

void add(int x , int y, int &total){
	total = x+y;
}

int main ()
{
	int a=1,b=2,total;
	add(a,b,total
	);
	cout<<"Addition is: "<<total;	
	return 0;
}