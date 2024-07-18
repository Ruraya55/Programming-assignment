#include <iostream>

using namespace std;

int main() {
    double accountBalance = 1000.00; // Initial account balance
    double dailyLimit = 500.00;      // Daily withdrawal limit
    double totalWithdrawnToday = 0.00; // Total amount withdrawn today
    double withdrawalAmount;

    cout << "Enter the amount you want to withdraw: ";
    cin >> withdrawalAmount;

    // Check if the withdrawal amount is greater than the account balance
    if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds." << endl;
    }
    // Check if the withdrawal amount exceeds the daily limit
    else if (withdrawalAmount > dailyLimit) {
        cout << "The amount exceeds the daily withdrawal limit." << endl;
    }
    // Check if the total amount withdrawn today plus the withdrawal amount exceeds the daily limit
    else if (totalWithdrawnToday + withdrawalAmount > dailyLimit) {
        cout << "The total amount withdrawn today exceeds the daily limit." << endl;
    }
    // Process the withdrawal if all conditions are met
    else {
        accountBalance -= withdrawalAmount;
        totalWithdrawnToday += withdrawalAmount;
        cout << "Withdrawal successful!" << endl;
        cout << "Remaining balance: $" << accountBalance << endl;
        cout << "Total withdrawn today: $" << totalWithdrawnToday << endl;
    }

    return 0;
}
