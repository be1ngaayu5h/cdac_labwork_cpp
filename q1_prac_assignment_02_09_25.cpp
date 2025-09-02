/*1.Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign
the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.*/
#include <iostream>
#include <cmath>
using namespace std;
class Student1 {
public:
    string name;
    int roll_no;

    Student1() {
        name = "John";
        roll_no = 2;
    }
};

int main() {
    Student1 st;
    cout << "Name: " << st.name << ", Roll No: " << st.roll_no << endl;
    return 0;
}