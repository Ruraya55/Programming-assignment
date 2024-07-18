#include <iostream>
using namespace std;

int main() {
    int choice;
    double area, radius, length, width, base, height;

    cout << "Menu:" << endl;
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculate the area of a rectangle" << endl;
    cout << "3. Calculate the area of a triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "Area of the circle: " << area << endl;
            break;
        case 2:
            cout << "Enter length and width: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of the rectangle: " << area << endl;
            break;
        case 3:
            cout << "Enter base and height: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of the triangle: " << area << endl;
            break;
        case 4:
            cout << "Quit selected. Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }

    return 0;
}
