/*
distiction for students who score 90 and above.
above 60 to 89 first class
50 to 59 second class
40 to 49 pass class
below 40 - "Fail" 
*/
#include<iostream>
using namespace std;
main() {
    int score;

    cout << "Enter the score: ";
    cin >> score;
    
  if (score < 0 || score > 100){
    	cout<< "Please enter Valid score!!";
  }else{
    if (score >= 90) {
        cout << "Distinction" << endl;
    }
    else if (score >= 60) {
        cout << "First Class" << endl;
    }
    else if (score >= 50) {
        cout << "Second Class" << endl;
    }
    else if (score >= 40) {
        cout << "Pass Class" << endl;
    }
    else {
        cout << "Fail" << endl;
    }
  }
}