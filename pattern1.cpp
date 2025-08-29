 /*
 +  +  +  +  +
 +  +  +  +  +
 +  +  +  +  +
 +  +  +  +  +
 +  +  +  +  +
 */
#include<iostream>
using namespace std;
int main()
{
	int row=5;
	int col=5;
	//outer loop
	for(int i=1;i<=row ;i++){
		
		//inner loop
		for(int j=1;j<=col ;j++){
			cout<<" + ";
		}
		cout<<endl;
	}
	return 0;
}