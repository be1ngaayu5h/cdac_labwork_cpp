#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	cout<<"X"<<endl;
	for(int i=1;i<=4;i++){
		cout<<"X";
		cout<<setw(i)<<"X"<<setfill(' ')<<endl;
	}
	cout<<"XXXXXX"<<endl;
return 0;
}