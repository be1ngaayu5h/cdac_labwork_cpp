//Problem: Write a function reverse_string that takes a string and returns the reversed string.
#include <iostream>
#include <string>

string reverse_string(string & s) {
    string reversed = s;
    int n = reversed.length();
    for (int i = 0; i < n / 2; ++i) {
        char temp = reversed[i];
        reversed[i] = reversed[n - 1 - i];
        reversed[n - 1 - i] = temp;
    }
    return reversed;
}

int main() {
    string input = "AAYUSH PARDESHI";
    string output = reverse_string(input);
    cout << output << std::endl;  
    return 0;
}

