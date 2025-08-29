#include<iostream>
using namespace std;
main(){
	int i,n,product=1;
	cout<<"enter number for factorial: "<<endl;
	cin>>n;
	for(i=1;i<=n;i++){
		product *=i;
	}
	cout<<"\nFactorial of "<<n<<" is: "<<product;
}