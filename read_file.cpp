#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main() {
	string userName;    
    cout << "Hello! Please enter your name to start session:" << endl;
    getline(cin, userName);    
    ifstream obj1(userName + "_log.txt");
    if(!obj1.is_open()){
    	cout<<"File not found! for user: "<<userName;
	}
	while(gets(obj1,))
    
    return 0;
}