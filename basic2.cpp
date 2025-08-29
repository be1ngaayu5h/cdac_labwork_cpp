/*
2. Reverse a String
Question: Reverse a string without using a built-in reverse function.
Steps:
Initialize two integer indices: i at the beginning (0) and j at the end (length() - 1).
Use a while loop that continues as long as i < j.
Inside the loop, swap the characters at str[i] and str[j] using a temporary variable.
Increment i and decrement j in each iteration to move towards the center.
The loop terminates when i and j meet, and the string is fully reversed.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string to reverse: ";
    getline(cin, str);
    int i = 0;
    int j = str.length() - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    cout << "Reversed string: " << str << endl;
    return 0;
}
