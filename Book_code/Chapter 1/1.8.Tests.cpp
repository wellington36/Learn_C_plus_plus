#include <cstdlib>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

bool accept(){
    cout << "Do you want to proceed (y or n)?\n";   // write question
    char answer = 0;                                // initialize to a value that will not appear on input
    cin >> answer;                                  // read answer

    if (answer == 'y')
        return true;
    return false;
}

bool accept2() {
    cout << "Do you want to proceed (y or n)?\n";   // write question
    char answer = 0;                                // initialize to a value that will not appear on input
    cin >> answer;                                  // read answer
    
    switch (answer) {
    case 'y':
        return true;
    case 'n':
        return false;
    default:
        cout << "I'll take that for a no.\n";
        return false;
    }
}

/*
void action() {             // not rum
    while (true) {
        cout << "enter action:\n";      // request action
        string act;
        cin >> act;             // read characters into a string
        Point::Point delta {0,0};      // Point holds an {x, y} pair

        for (char ch : act) {
            switch (ch) {
            case 'u':   // up
            case 'n':   // north
                ++delta.y;
                break;
            case 'r':   // right
            case 'e':   // east
                ++delta.x;
                break;
            // more actions ...
            default:
                cout << "I freeze!\n";
            }
            move(current+delta*scale);
            update_display();
        }
    }
}
*/

void do_something(vector<int> &v) {
  if (auto n = v.size()) {
    // ... we get here if n!=0 ...
  }
    // ...
}

int main() {
    // cout << accept() << endl;

    cout << accept2() << endl;
}