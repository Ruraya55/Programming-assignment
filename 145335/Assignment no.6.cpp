#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    int timer = 0;

    while (true) {
        switch (timer % 3) {
            case 0:
                cout << "Traffic Light: RED" << endl;
                break;
            case 1:
                cout << "Traffic Light: YELLOW" << endl;
                break;
            case 2:
                cout << "Traffic Light: GREEN" << endl;
                break;
        }
        this_thread::sleep_for(chrono::seconds(3));
        timer++;
    }

    return 0;
}
