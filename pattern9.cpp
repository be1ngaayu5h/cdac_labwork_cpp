//     1A
//    12AB
//   123ABC
//  1234ABCD
// 12345ABCDE
#include<iostream>
using namespace std;
main(){
	int space,i,j,s;
	char ic,jc;
	for(space=5,i=1,ic='A';space>=1&&i<=5&&ic<='E';space--,i++,ic++){
		for(s=1;s<=space;s++){
			cout<<" ";
		}
		for(j=1;j<=i;j++){
			cout<<j;
		}
		for(jc='A';jc<=ic;jc++){
			cout<<jc;
		}
		
	cout<<endl;
	}
}