//add 2 numbers using function
#include<iostream>
using namespace std;

void add(int x,int y){
	cout<<"Addition is : "<<x+y;
}

int main(){
	int a,b;
	cout<<"Enter 2 numbers: \n";
	cin>>a>>b;
	add(a,b);
	return 0;
}