/*
1. Count Vowels and Consonants
Question: Write a program that counts the number of vowels and consonants in a given string.
Steps:
Initialize two integer counters: vowels and consonants to 0.
Iterate through each character of the input string.
Convert the character to lowercase using tolower().
Use an if statement to check if the character is one of 'a', 'e', 'i', 'o', 'u'. If so, increment vowels.
Use an else if to check if the character is an alphabet (between 'a' and 'z'). If so, increment consonants.
Print the final counts.
*/
#include <iostream>
#include <string>
#include <cctype>  
using namespace std;
int main() {
    int count_v = 0, count_c = 0;
    string line;
    cout << "\nEnter a line to check: ";
    getline(cin, line);

    for (int i = 0; i < line.length(); i++) {
        char ch = tolower(line[i]);
  
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                count_v++;
            } else {
                count_c++;
            }
    }

    cout << "Vowels: " << count_v << endl;
    cout << "Consonants: " << count_c << endl;

    return 0;
}
