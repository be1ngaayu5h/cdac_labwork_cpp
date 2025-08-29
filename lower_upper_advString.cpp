#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	int l_count=0,u_count=0,d_count=0,sym_count=0;
	string line;
	cout<<"\nEnter a line to check: ";
	getline(cin,line);
	for(char c:line)
	{
		if (islower(c))
		{
			l_count++;
		}else if (isupper(c))
		{
			u_count++;
		}else if (isdigit(c))
		{
			d_count++;
		}else if (isspace(c))
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