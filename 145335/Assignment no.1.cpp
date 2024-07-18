#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    double bankBalance;
    string crbStatus;
    int customerDuration; // in months

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter bank balance: ";
    cin >> bankBalance;
    cout << "Enter CRB status (good/bad): ";
    cin >> crbStatus;
    cout << "Enter duration as a customer (in months): ";
    cin >> customerDuration;

    if (age > 22 && bankBalance > 50000 && crbStatus == "good" && customerDuration > 6) {
        cout << "Customer is qualified for a loan." << endl;
    } else {
        cout << "Customer is not qualified for a loan." << endl;
    }

    return 0;
}
