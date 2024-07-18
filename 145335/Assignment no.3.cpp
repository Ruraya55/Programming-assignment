#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string course;
    int score;
    
    // Input student information
    cout << "Enter the full name of the student: ";
    getline(cin, name);
    
    cout << "Enter the course of the student: ";
    getline(cin, course);
    
    cout << "Enter the score of the student: ";
    cin >> score;
    
    // Switch statement to assign grade based on the score
    switch(score) {
        case 70 ... 100: // Grade A for scores between 70 and 100 (inclusive)
            cout << "Grade A" << endl;
            break;
        case 60 ... 69:  // Grade B for scores between 60 and 69 (inclusive)
            cout << "Grade B" << endl;
            break;
        case 50 ... 59:  // Grade C for scores between 50 and 59 (inclusive)
            cout << "Grade C" << endl;
            break;
        case 40 ... 49:  // Grade D for scores between 40 and 49 (inclusive)
            cout << "Grade D" << endl;
            break;
        case 0 ... 39:   // Grade F for scores between 0 and 39 (inclusive)
            cout << "Grade F" << endl;
            break;
        default:
            cout << "Invalid score input" << endl;
    }
    
    return 0;
}
