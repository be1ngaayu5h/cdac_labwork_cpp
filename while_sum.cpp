#include <iostream>
using namespace std;
main(){
	int a=1, sum=0;
	int n;
	
	while(a<=5){
		cout<<"Enter value for N: ";
		cin>>n;
		sum=sum+n;
		a++;
	}
	cout<<"\nSum = "<<sum;
}