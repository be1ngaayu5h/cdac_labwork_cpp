#include<iostream>
using namespace std;
class employee {
private:
    int eno;
    float salary;
    char ename[25];
public:
    void setdata() {
        cout << "Enter employee number: ";
        cin >> eno;
        cout << "Enter employee name: ";
        cin >> ename;
        cout << "Enter salary: ";
        cin >> salary;
    }

    float getSalary() {
        return salary;
    }
};

int main() {
    employee e1,e2,e3;
    float sum = 0, avg;
        cout << "\nenter details for employee: "<<endl;
        e1.setdata();
        cout << "\nenter details for employee: "<<endl;
        e2.setdata();
        cout << "\nenter details for employee: "<<endl;
        e3.setdata();
    sum=e1.getSalary()+e2.getSalary()+e3.getSalary();
    avg = sum / 3;
    cout << "\ntotal salary of all employees: " << sum << endl;
    cout << "average salary of employees: " << avg << endl;
}
