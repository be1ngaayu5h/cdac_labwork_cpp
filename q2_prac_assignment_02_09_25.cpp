/*
2.Assign and print the roll number, phone number and address of two students having names "Sam"
and "John" respectively by creating two objects of the class 'Student'.
*/
#include <iostream>
using namespace std;
class Student2 {
public:
    string name;
    int roll_no;
    string phone;
    string address;

    Student2(string n, int r, string p, string a) {
        name = n;
        roll_no = r;
        phone = p;
        address = a;
    }
};

int main() {
    Student2 st1("Aayush", 1, "1234567890", "Narayan Peth Pune");
    Student2 st2("Akhilesh", 2, "0987654321", "Shaniwar peth Pune");

    cout << "Name: " << st1.name << ", Roll No: " << st1.roll_no 
         << ", Phone: " << st1.phone << ", Address: " << st1.address << endl;

    cout << "Name: " << st2.name << ", Roll No: " << st2.roll_no 
         << ", Phone: " << st2.phone << ", Address: " << st2.address << endl;

    return 0;
}