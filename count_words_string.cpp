#include<iostream>
using namespace std;
int main()
{
	int i,count=1;
	string word;
	cout<<"\nEnter a word: ";
	getline(cin,word);
	for(i=0;word[i]!='\0';i++)
	{
		if (word[i]==' ')
		{
			count++;
		}
	}
	
	cout<<"\ntotal words are: "<<count;
	return 0;
}