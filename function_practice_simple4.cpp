//largest number from a array
#include <iostream>
#include <string>
using namespace std;
int get_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int numbers[] = {3, 7, 2, 9, 5};
    int size = 5;
    cout << "Max number: " << get_max(numbers, size) << endl;
    return 0;
}
