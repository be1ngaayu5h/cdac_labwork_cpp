//remove extra spaces inbetween words  
#include<iostream>
#include<string>
using namespace std;
int main(){
	string sen;
	cout<<"Enter a sentance: ";
	getline (cin , sen);
	int len = sen.length();
	for(int i=0;i<len;i++){
		if(sen[i]==' '&& sen[i+1]==' '){
			int count=0;
			int j=0;
			while()
			j++
			count++;
			sen=sen.replace(i,count," ");
		}
    }
	cout<<sen;
return 0;
}