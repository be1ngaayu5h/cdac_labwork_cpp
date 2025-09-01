#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main() {
	string userName;    
    cout << "Hello! Please enter your name to start session:" << endl;
    getline(cin, userName);    
    ofstream logFile(userName + "_log.txt", ios::app);
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

    return 0;
}