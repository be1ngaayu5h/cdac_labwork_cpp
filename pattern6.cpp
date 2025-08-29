// X
// XXX
// XXXXX
// XXXXXXX
// XXXXX
// XXX
// X
#include<iostream>
using namespace std;
main(){
	int i,j;
	for(i=1;i<=7;i+=2){
		for(j=1;j<=i;j++){
			cout<<"X";
		}
		cout<<endl;
	}
	for(i=5;i>=1;i-=2){
		for(j=1;j<=i;j++){
			cout<<"X";
		}
		cout<<endl;
	}
}