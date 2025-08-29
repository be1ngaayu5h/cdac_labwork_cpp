//increase array size of each element by 2
#include<iostream>
using namespace std;

void inc(int a[],int size,int increment){
	for (int i=0 ; i<size ; i++)
	a[i]=a[i]+increment;
	
	for (int i=0 ; i<size ; i++)
	cout<<endl<<a[i];
}

int main(){
	int array[]={10,20,30,40,50,60};
	int size=6;	
	inc(array,size,3);
	return 0;
}