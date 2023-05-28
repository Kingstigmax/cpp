#include <iostream>
using namespace std;


bool accept3() {

    int tries = 1;
    while (tries<4) {
        cout << "Proceed (y or n)?\n";
        char answer = 0;
        cin >> answer;

        switch (answer) {
        case 'y':
            return true;

        case 'n':
            return false;
        
        default:
            cout << "Sorry I don't understand that\n";
            ++tries;
        }
    }
    cout << "I guess not\n";
    return false;
}

int main() {
    accept3();
}
