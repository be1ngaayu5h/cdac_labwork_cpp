#include <iostream>
#include <string>
using namespace std;

class Bank_account {
private:
    int accno;
    string name, gender;
    double balance;
    static int account_generator;

public:
    static int generate_account_no() {
        return ++account_generator;
    }

    void register_account(string name, string gender, double balance) {
        this->name = name;
        this->gender = gender;
        this->balance = balance;
        this->accno = generate_account_no();
    }

    void display() {
        cout << "\nAccount no: " << accno << "\tName: " << name << "\tGender: " << gender << "\tBalance: " << balance << endl;
    }

    int get_accno() {
        return accno;
    }

    void withdraw(double amt) {
        if (balance - amt < 0)
            cout << "Transaction Failed due to Insufficient balance\n";
        else {
            balance -= amt;
            cout << "Withdrawal successful!\nNew balance is " << balance << endl;
        }
    }

    void deposit(double amt) {
        if (amt > 0) {
            balance += amt;
            cout << "Deposit successful!\nNew balance is " << balance << endl;
        } else {
            cout << "Amount cannot be negative!" << endl;
        }
    }

    void check_bal() {
        display();  
    }
};

int Bank_account::account_generator = 1000;

int main() {
    Bank_account account[100];
    int current_account = 0;
    int ch;
    double amount;
    string name, gender;

    do {
        cout << "\n----BANKING MENU----" << endl << "___________________________________\n";
        cout << "1. Create account\n2. Deposit\n3. Withdraw\n4. Check balance\n0. Exit\n___________________________________\nEnter your choice -> ";
		cin >> ch;

        switch (ch) {
        case 1:
            cout << "\nEnter name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter gender: ";
            cin >> gender;

            while (true) {
                cout << "Enter amount (Minimum 5000): ";
                cin >> amount;
                if (amount >= 5000)
                    break;
                else
                    cout << "Amount is too low!\n";
            }

            account[current_account].register_account(name, gender, amount);
            cout << "Account created successfully. Account No: " << account[current_account].get_accno() << endl;
            current_account++;
            break;

        case 2: {
            int accno_to_search;
            bool found = false;
            cout << "\nEnter Account no: ";
            cin >> accno_to_search;

            for (int i = 0; i < current_account; i++) {
                if (accno_to_search == account[i].get_accno()) {
                    cout << "Enter amount: ";
                    cin >> amount;
                    account[i].deposit(amount);
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Account not found.\n";
            }
            break;
        }

        case 3: {
            int accno_to_search;
            bool found = false;
            cout << "\nEnter Account no: ";
            cin >> accno_to_search;

            for (int i = 0; i < current_account; i++) {
                if (accno_to_search == account[i].get_accno()) {
                    cout << "Enter amount: ";
                    cin >> amount;
                    account[i].withdraw(amount);
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Account not found.\n";
            }
            break;
        }

        case 4: {
            int accno_to_search;
            bool found = false;
            cout << "\nEnter Account no: ";
            cin >> accno_to_search;

            for (int i = 0; i < current_account; i++) {
                if (accno_to_search == account[i].get_accno()) {
                    account[i].check_bal();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Account not found.\n";
            }
            break;
        }

        case 0:
            cout << "Thank you for using ASP Bank.\nEnding Program. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice! Please enter a valid option.\n";
        }

    } while (ch != 0);

    return 0;
}