#include<iostream>
using namespace std;
int main()
{
	int i,l_count=0,u_count=0,d_count=0,sym_count=0;
	string word;
	cout<<"\nEnter a line to check: ";
	getline(cin,word);
	for(i=0;word[i]!='\0';i++)
	{
		if ('a'<=word[i] && word[i]<='z')
		{
			l_count++;
		}else if ('A'<=word[i] && word[i]<='Z')
		{
			u_count++;
		}else if ('0'<=word[i] && word[i]<='9')
		{
			d_count++;
		}else if(word[i]!=' ')
		{
			sym_count++;
		}
	}
	
	cout<<"\ntotal lower case are: "<<l_count<<endl;
	cout<<"\ntotal upper case are: "<<u_count<<endl;
	cout<<"\ntotal digits are: "<<d_count<<endl;
	cout<<"\ntotal Symbols are: "<<sym_count<<endl;
	return 0;
}