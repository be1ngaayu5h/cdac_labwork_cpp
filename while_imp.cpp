#include <iostream>
using namespace std;
main()
{
	int x,y,b;
	int a=1,ans=1;
	cout<<"Enter value of X and Y : ";
	cin>>x>>y;
	while(a<=y){
		ans=ans*x;
		a++;
	}
	cout<<"Answer of X^Y aka "<<x<<"^"<<y<<" is: "<<ans;
	
}