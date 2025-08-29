#include <iostream>
using namespace std;

void checkoddeven(int q)
{
    if (q%2==0){
    	cout<<"Number is Even";
	}else{
		cout<<"Number is Odd";
	}
}


 main()
{
    int a;
    cout << "Enter a Number: ";
    cin >> a;
    checkoddeven(a);
}
