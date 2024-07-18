#include <iostream>
using namespace std;

int main() {
    int age;
    string movieType;
    double ticketPrice = 0.0;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter movie type (regular/3D): ";
    cin >> movieType;

    if (age < 12) {
        if (movieType == "regular") {
            ticketPrice = 8.0;
        } else if (movieType == "3D") {
            ticketPrice = 10.0;
        } else {
            cout << "Invalid movie type." << endl;
            return 1;
        }
    } else if (age >= 12 && age < 60) {
        if (movieType == "regular") {
            ticketPrice = 12.0;
        } else if (movieType == "3D") {
            ticketPrice = 15.0;
        } else {
            cout << "Invalid movie type." << endl;
            return 1;
        }
    } else {
        if (movieType == "regular") {
            ticketPrice = 10.0;
        } else if (movieType == "3D") {
            ticketPrice = 12.0;
        } else {
            cout << "Invalid movie type." << endl;
            return 1;
        }
    }

    cout << "The ticket price is: $"
