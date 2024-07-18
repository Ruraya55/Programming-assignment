#include <iostream>
#include <string>
using namespace std;

int main() {
    int daysLate;
    string bookType;
    double fine = 0.0;

    cout << "Enter number of days late: ";
    cin >> daysLate;
    cout << "Enter book type (regular/children/reference): ";
    cin >> bookType;

    if (bookType == "regular") {
        if (daysLate <= 5) {
            fine = daysLate * 0.50;
        } else {
            fine = 5 * 0.50 + (daysLate - 5) * 1.0;
        }
    } else if (bookType == "children") {
        if (daysLate <= 5) {
            fine = daysLate * 0.25;
        } else {
            fine = 5 * 0.25 + (daysLate - 5) * 0.50;
        }
    } else if (bookType == "reference") {
        fine = daysLate * 1.50;
    } else {
        cout << "Invalid book type." << endl;
        return 1;
    }

    cout << "The fine is: $" << fine << endl;

    return 0;
}
