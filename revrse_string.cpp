//reverse a string
#include<iostream>
#include<string>
using namespace std;
int main(){
	cout<<"Enter you name: ";
	string name;
	getline(cin,name);
	for(int i=0,j=name.length()-1;i>=j;i++,j--){
		char temp =name[i];
		name[i]=name[j];
		name[j]=temp;
	}
	cout<< name;
return 0;
}