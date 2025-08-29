#include <iostream>
using namespace std;

main() {
    int choice;
    int bill_no = 101;

    float tea = 12.00, coffee = 35.00, water = 10.00, bm = 75.00;
    int tqty = 0, cqty = 0, wqty = 0, bqty = 0;

    do {
        cout << "\n------ Welcome to Tea Stall ------\n";
        cout << "1. Tea-------10INR\n";
        cout << "2. Coffee----40INR\n";
        cout << "3. Bun Maska-100INR\n";
        cout << "4. Water-----20INR\n";
        cout << "5. Generate Bill\n";
        cout << "0. Exit\n";
        cout << "----------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You selected Tea\n";
                cout << "Enter number of items: ";
                int tq;
                cin >> tq;
                tqty += tq;
                break;

            case 2:
                cout << "You selected Coffee\n";
                cout << "Enter number of items: ";
                int cq;
                cin >> cq;
                cqty += cq;
                break;

            case 3:
                cout << "You selected Bun Maska\n";
                cout << "Enter number of items: ";
                int bmq;
                cin >> bmq;
                bqty += bmq;
                break;

            case 4:
                cout << "You selected Water\n";
                cout << "Enter number of items: ";
                int wq;
                cin >> wq;
                wqty += wq;
                break;

            case 5: {
            	cout << "\n!--- TEA STALL ---!\n";
                cout << "\n---- Your Bill ----\n";
                cout << "Bill No: " << bill_no << endl;
                float subtotal = tqty * tea + cqty * coffee + wqty * water + bqty * bm;
                float cgst = (subtotal * 2.5) / 100;
                float sgst = (subtotal * 2.5) / 100;
                float grand_total = subtotal + cgst + sgst;

                if (tqty != 0)
                    cout << "Tea       " << tea << " X " << tqty << " = " << tqty * tea << endl;
                if (cqty != 0)
                    cout << "Coffee    " << coffee << " X " << cqty << " = " << cqty * coffee << endl;
                if (wqty != 0)
                    cout << "Water     " << water << " X " << wqty << " = " << wqty * water << endl;
                if (bqty != 0)
                    cout << "Bun Maska " << bm << " X " << bqty << " = " << bqty * bm << endl;
                cout << "-----------------------------------\n";
                cout << "Sub Total:        " << subtotal << "\n";
                cout << "CGST 2.5%:        " << cgst<< "\n";
                cout << "SGST 2.5%:        " << sgst << "\n";
                cout << "Grand Total:      " << grand_total << "\n";
                bill_no++;
                tqty = cqty = wqty = bqty = 0;
                break;
            }
            case 0:
                cout << "Thank you! Visit again.\n";
                break;

            default:
                cout << "Wrong choice given, please check input.\n";
                break;
        }
        if (choice != 0 && choice != 5)
            cout << "\nDo you want to add anything else? (Choose from menu or Generate Bill)\n";
    } while (choice != 0);
}