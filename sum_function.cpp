#include <iostream>
using namespace std;

int sum()
{
    int n, total = 0;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> n;
        total += n;
    }
    cout << "Average is: " << total/5 << endl;
    return total;
}



int main()
{
    int totalSum;
    totalSum = sum();
    cout << "\nSum is: " << totalSum << endl;
    return 0;
}
