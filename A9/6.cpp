#include <iostream>
using namespace std;

class ITEM {
private:
    int item_code;
    float item_rate;
    int quantity;

public:
    
    ITEM(int code, float rate, int qty) {
        item_code = code;
        item_rate = rate;
        quantity = qty;
    }

    
    float calculateAmount() {
        return item_rate * quantity;
    }

    void printItemInfo() {
        cout << "Item Code: " << item_code << ", Amount: " <<  calculateAmount() << endl;
    }
};

int main() {
    int num = 5;
    // cout << "Enter Number of item = ";
    // cin >> num;
    ITEM* items[num];

    items[0] = new ITEM(1, 110.50, 2);
    items[1] = new ITEM(2, 200.75, 3);
    items[2] = new ITEM(3, 115.00, 5);
    items[4] = new ITEM(4, 360.75, 2);
    items[5] = new ITEM(5, 1365.00, 1);

    for (int i = 0; i < 5; i++) {
        items[i]->printItemInfo();
    }

    return 0;
}