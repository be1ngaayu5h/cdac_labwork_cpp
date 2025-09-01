#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    bool isAvailable;
    static int bookIDGenerator;

public:
    Book() {
        bookID = 0;
        title = "";
        author = "";
        isAvailable = true;
    }

    void addBook(string t, string a) {
        title = t;
        author = a;
        bookID = generateBookID();
        isAvailable = true;
    }

    void checkOut() {
        if (isAvailable) {
            isAvailable = false;
            cout << "Book '" << title << "' has been checked out." << endl;
        } else {
            cout << "Book '" << title << "' is already checked out." << endl;
        }
    }

    void returnBook() {
        if (!isAvailable) {
            isAvailable = true;
            cout << "Book '" << title << "' has been returned." << endl;
        } else {
            cout << "Book '" << title << "' was not checked out." << endl;
        }
    }

    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Status: " << (isAvailable ? "Available" : "Checked Out") << endl;
    }

    int getBookID() {
        return bookID;
    }

    static int generateBookID() {
        return bookIDGenerator++;
    }
};

int Book::bookIDGenerator = 500;

int main() {
    Book library[100];
    int currentBooks = 0;
    int choice;

    do {
    	cout << "\n______________________________________";
        cout << "\n==== Library Management Menu ====" << endl;
        cout << "______________________________________";
        cout << "1. Add a Book" << endl;
        cout << "2. Check Out a Book" << endl;
        cout << "3. Return a Book" << endl;
        cout << "4. Display Book Details" << endl;
        cout << "5. Exit" << endl;
        cout << "\n______________________________________";
        cout << "Enter your choice -> ";
        cin >> choice;

        switch (choice) {
        case 1: {
            if (currentBooks >= 100) {
                cout << "Library is full! Cannot add more books." << endl;
                break;
            }
            cin.ignore();  // clear newline character before getline
            string title, author;
            cout << "Enter Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);

            library[currentBooks].addBook(title, author);
            cout << "Book Added Successfully! Your Book ID is: " << library[currentBooks].getBookID() << endl;
            currentBooks++;
            break;
        }

        case 2: {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;

            bool found = false;
            for (int i = 0; i < currentBooks; i++) {
                if (library[i].getBookID() == id) {
                    library[i].checkOut();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Book with ID " << id << " not found." << endl;
            }
            break;
        }

        case 3: {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;

            bool found = false;
            for (int i = 0; i < currentBooks; i++) {
                if (library[i].getBookID() == id) {
                    library[i].returnBook();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Book with ID " << id << " not found." << endl;
            }
            break;
        }

        case 4: {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;

            bool found = false;
            for (int i = 0; i < currentBooks; i++) {
                if (library[i].getBookID() == id) {
                    library[i].displayDetails();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Book with ID " << id << " not found." << endl;
            }
            break;
        }

        case 5:
            cout << "Exiting the program. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice! Please enter a valid option." << endl;
        }
    } while (choice != 5);

    return 0;
}
