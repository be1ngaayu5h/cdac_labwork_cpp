// string palimdrome
#include<iostream>
#include<string>
using namespace std;
int main(){
	cout<<"Enter you name: ";
	string name;
	bool flag=true;
	getline(cin,name);
	int len=name.length();
	for(int i=0,j=len-1;i>=j;i++,j--){
		if(name[i] != name[j]){
			flag=false;
			break;
		}
	}
	if (flag == 1){
		cout<<"Word is not a palindrome";
	}else{
		cout<<"Word is a palindrome";
	}
return 0;
}