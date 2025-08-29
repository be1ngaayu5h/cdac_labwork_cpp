#include <iostream>
using namespace std;

struct employee {
    int eno;
    char ename[20];
    int salary;
};
int main() {
    employee emp[5];
    int total = 0;
    float avg;
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for Employee " << i + 1 << " (Emp No, Name, Salary): ";
        cin >> emp[i].eno >> emp[i].ename >> emp[i].salary;
    }
    cout << "\n-------------------------------------------------------------" << endl;
    cout << "Emp Name\tEmp No\t\tEmp Salary" << endl;
    cout << "-------------------------------------------------------------" << endl;
    for (int i = 0; i < 5; i++) {
        cout << emp[i].ename << "\t\t" << emp[i].eno << "\t\t" << emp[i].salary << endl;
        total += emp[i].salary;
    }
    avg = total / 5.0;
    cout << "\nTotal Salary = " << total;
    cout << "\nAverage Salary = " << avg << endl;

    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }
    cout << "\nEmployee with Maximum Salary:" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "Emp Name\tEmp No\t\tEmp Salary" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << emp[maxIndex].ename << "\t\t" << emp[maxIndex].eno << "\t\t" << emp[maxIndex].salary << endl;
    return 0;
}