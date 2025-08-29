#include<iostream>
using namespace std;

int main() {
    int n, i, j, temp, a[100];

    //array size
    cout << "Enter number of elements: ";
    cin >> size;

    //array elements
    for(i = 0; i < size; i++) {
        cout << "Enter element at [" << i << "]: ";
        cin >> a[i];
    }

    //Bubble sort
    for(i = 0; i < size - 1; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Output sorted array
    cout << "\nSorted array in ascending order:\n";
    for(i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
