#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	for(int i=1;i<4;i++){
		cout<<setw(5+i)<<"XXXXX"<<setfill(' ')<<endl;
	}
	for(int i=2;i>=1;i--){
		cout<<setw(5+i)<<"XXXXX"<<setfill(' ')<<endl;
	}
return 0;
}