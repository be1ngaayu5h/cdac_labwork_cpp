#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	cout<<"XXXXXX"<<endl;
	for(int i=2,j=4;i<=5 && j>=1;i++,j--){
		cout<<setw(i)<<"X"<<setw(j)<<"X"<<endl;
	}
	cout<<"     X"<<endl;
return 0;
}