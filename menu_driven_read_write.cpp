#include <fstream>
#include <string>
#include <ctime>
#include <iostream>
using namespace std;
string userName;
void enter_log() {
	cout << "Hello! Please enter your name to start:" << endl;
    cin>> userName; 
    ofstream logFile(userName + "_log.txt", ios::app);
    if (!logFile) {
        cerr << "Error opening log file for writing!" << endl;
        return;
    }

    time_t currentTime = time(NULL);
    string timeStamp = ctime(&currentTime);
    logFile << "--- New Logging Session for " << userName << " ---" << endl;
    logFile << "Session start on: " << timeStamp;
    cout << "!Type 'END' to finish and save.!" << endl;

    string userInput;
    while (true) {
        cout << "> ";
        getline(cin, userInput);

        if (userInput == "END") {
            currentTime = time(NULL);
            timeStamp = ctime(&currentTime);
            logFile << "Session ended on: " << timeStamp;
            break;
        }

        logFile << userInput << endl;
    }
    logFile.close();
    cout << "Logging session finished. Data saved to " << userName + "_log.txt" << endl;
}

void read_log() {
	cout << "Hello! Please enter your name to start:" << endl;
    cin>> userName; 
    ifstream obj1(userName + "_log.txt");
    if (!obj1.is_open()) {
        cout << "File not found! for user: " << userName << endl;
        return;
    }

    cout << "--- Log content for " << userName << " ---" << endl;
    string line;
    while (getline(obj1, line)) {
        cout << line << endl;
    }
    obj1.close();
}

int main() {

    int ch;
    do {
        cout << "---MENU---" << endl;
        cout << "1. Enter a log\n2. Read a log\n0. EXIT\n";
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                enter_log();
                break;
            case 2:
                read_log();
                break;
            case 0:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Please enter a valid choice from menu!" << endl;
                break;
        }
    } while (ch != 0);

    return 0;
}