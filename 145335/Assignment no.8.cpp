#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, discount = 0.0, totalCost;

    cout << "Enter purchase amount: ";
    cin >> purchaseAmount;

    if (purchaseAmount >= 500) {
        discount = purchaseAmount * 0.20;
    } else if (purchaseAmount >= 300) {
        discount = purchaseAmount * 0.15;
    } else if (purchaseAmount >= 100) {
        discount = purchaseAmount * 0.10;
    }

    totalCost = purchaseAmount - discount;
    cout << "Total cost after discount: $" << totalCost << endl;

    return 0;
}
