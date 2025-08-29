#include <iostream>
using namespace std;
void sum_array(int a[])
{
    int sum = 0; 
    for (int i = 0; i <= 9; i++) {
        sum = sum + a[i];
    }
    cout << "Sum of array elements: " << sum << endl;
}
main()
{
    int a[10];
    cout << "\n Enter 9 values in Array:\n";
    for (int i = 0; i <= 9; i++) {
        cin >> a[i];
    }
    sum_array(a); 
}
