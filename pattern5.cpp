#include<iostream>
using namespace std;
main(){
	int i,j,k=2;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			cout<<k<<" ";
			k+=2;
		}
		cout<<endl;
	}
}