#include<iostream>
using namespace std;

class product {
private:
    int p_no, p_qty;
    float p_rate, amt;

public:
    product() {
        p_no = 100;
        p_rate = 475.50;
        p_qty = 0; 
        amt = 0;
    }

    void setQty(int qty) {
        p_qty = qty;
    }

    void calculateAmt() {
        amt = p_rate * p_qty;
    }

    void display() {
        cout << "Product no: " << p_no << endl;
        cout << "Product Qty: " << p_qty << endl;
        cout << "Product rate: " << p_rate << endl;
        cout << "Total amount: " << amt << endl;
    }

    ~product() {
        cout << "Object Destroyed \n";
    }
};

int main() {
    int qty;
    cout << "Enter Qty for product: ";
    cin >> qty;
    product p1;
    p1.setQty(qty);
    p1.calculateAmt();
    p1.display();
    return 0;
}
