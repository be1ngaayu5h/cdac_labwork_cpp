//Question: Write a C++ program to capitalize first letter of each word
#include<iostream>
#include<string>
using namespace std;
int main(){
	string sen;
	cout<<"Enter a sentance: ";
	getline (cin , sen);
	int len = sen.length();
	sen[0]=toupper(sen[0]);
	for(int i=0;i<len;i++){
	    if (sen[i] == ' '){
			sen[i+1]=toupper(sen[i+1]);
		}
	}
	cout<<endl<<sen;

return 0;
}

