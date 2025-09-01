#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	for(int i=1;i<6;i++){
		cout<<setw(6-i)<<" ";
		cout<<setw(i)<<setfill('X')<<""<<endl<<setfill(' '); 
	}
	cout<<endl;
return 0;
}