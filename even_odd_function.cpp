// is_even function
#include<iostream>
using namespace std;
bool is_even(int x){
	if ( x % 2 == 0)
	return (true);
	else
	return (false);
}
int main(){
	if	(is_even(21))
	cout<<"\nNumber is Even \n";
	else
	cout<<"\nNumber is Odd\n";
	return 0;
}