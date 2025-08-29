//Problem: Write a function get_max that takes a list of numbers and returns the largest number in the list. 
//Assume the list is not empty.
#include<iostream>
using namespace std;
int get_max(int a[]){
	int max=a[0];
	for(int i=0;i<6;i++){
		if(a[i]>max)
		max=a[i];
	}
	return (max);
}

int main(){
	int array[]={10,20,30,40,50,60};
	cout<<"\nMaximum number is: "<<get_max(array)<<endl;
	return 0;
}