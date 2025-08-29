#include<iostream>
using namespace std;
main(){
	int space,i,j,s;
	for(space=1,i=5;space<=5,i>=1;space++,i--){
		for(s=1;s<=space;s++){
			cout<<" ";
		}
		for(j=1;j<=i;j++){
			cout<<" X";
		}
	cout<<endl;
	}
}