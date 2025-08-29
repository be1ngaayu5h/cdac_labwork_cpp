#include<iostream>
using namespace std;
int main()
{
	int i,count=0;
	string word;
	cout<<"\nEnter a word: ";
	getline(cin,word);
	for(i=0;word[i]!='\0';i++)
	{
		if (word[i]=='a'||word[i]=='A'||word[i]=='e'||word[i]=='E'||word[i]=='i'||word[i]=='I'||word[i]=='o'||word[i]=='O'||word[i]=='u'||word[i]=='u')
		{
			count++;
		}
	}
	
	cout<<"\nNumber of vowels in given statement are: "<<count;
	return 0;
}