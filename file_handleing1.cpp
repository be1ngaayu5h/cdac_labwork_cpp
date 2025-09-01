#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
	ofstream asp("ASP_details.txt");
	asp << "Name: Aayush Sanjay Pardeshi \nEmail ID: pardeshiaayush27@gmail.com \nPh. no.: 9405654013";
	asp.close();
	return 0;
}