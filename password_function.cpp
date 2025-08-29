//password strength checker
#include<iostream>
#include<string>
using namespace std;

int password_check(string pass){
	int lc=0,uc=0,d=0,len=0,s=0,strength=0;
	for(int i=0; i< pass.length();i++)
	{
		if (islower(pass[i]))
		lc=1;
		else if (isupper(pass[i]))
		uc=1;
		else if (isdigit(pass[i]))
		d=1;
		else if(!isspace(pass[i]))
		s=1;
	}
	if (pass.length()>=8)
	len=1;
	strength=len+d+uc+lc;
	return(strength);
}

int main(){
	string password;
	cout<<"Enter a password: \n";
	getline(cin,password);
	cout<<"Your password stregth is : "<< password_check(password) << " out of 5";
	return 0;
}