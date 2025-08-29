#include<iostream>
using namespace std;
main(){
	
	int i,n;
	cout<<"Enter a number for its table: ";
	cin>>n;
	for(i=1;i<11;i++){
		cout<<n<<" X "<<i<<" = "<<i*n<<endl;
	}
}