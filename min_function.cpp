//minimum of 2 numbers 
//add 2 numbers using function
#include<iostream>
using namespace std;
int min(int n1, int n2){
	if (n1>n2)
	return n2;
	else
	return n1;
}

int main(){
	int a,b,c,d;
	cout<<"Enter 4 numbers: \n";
	cin>>a>>b>>c>>d;
	int f1 = min(a,b);
	int f2 = min(c,d);
	cout<< min (f1,f2);
	return 0;
}