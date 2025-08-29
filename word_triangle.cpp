//word trangle
#include<iostream>
#include<string>
using namespace std;
int main(){
	cout<<"Enter you name: ";
	string name;
	getline(cin,name);
	for(int i=0;i<=name.length();i++){
		cout<<name.substr(0,i)<<endl;
	}
}