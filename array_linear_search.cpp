#include <iostream>
using namespace std;

int main() {
    int a[6], i, n, j = -1;

    // Input 6 elements into the array
    cout << "Enter 6 values in Array:\n";
    for(i = 0; i < 6; i++) {
        cin >> a[i];
    }

    // Input the number to search for
    cout << "Enter the value to search in array:\n";
    cin >> n;

    // Search the array for the input value
    for(i = 0; i < 6; i++) {
        if(a[i] == n) {
            j = i;  // Store the index where value is found
            break;  // Exit the loop once found
        }
    }

    // Check if value was found and display appropriate message
    if(j >= 0) {
        cout << "Searched number is present in array at index no.: " << j << endl;
    } else {
        cout << "Searched number is not present in the array." << endl;
    }

    return 0;  // Indicate successful execution
}
