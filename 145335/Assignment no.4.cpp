#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (num1 > num2) {
        case 1:
            cout << "The maximum number is " << num1 << endl;
            break;
        case 0:
            cout << "The maximum number is " << num2 << endl;
            break;
    }

    return 0;
}
