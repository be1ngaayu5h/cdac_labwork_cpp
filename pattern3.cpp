 /*
 1  1  1  1 
 2  2  2  2 
 3  3  3  3 
 4  4  4  4 
 5  5  5  5
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
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}