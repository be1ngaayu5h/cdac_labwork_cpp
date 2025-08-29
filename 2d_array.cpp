#include <iostream>
using namespace std;

main()
{
	int a[3][4],i,j;
    cout<<"Enter values in matrix: \n";
	
	for(i=0;i<3;i++)
    {
		for(j=0;j<4;j++)
		{
			cin>>a[i][j];
		}
	}

    cout<<"Matrix:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
	    {
			cout<<a[i][j];
		}
		cout<<endl;
	}
	
}