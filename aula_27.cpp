#include <iostream>

using namespace std;

int main() {
    
    enum armas{fuzil=100, revolver=8, rifle=12, escorpeta=1};

    armas armaSel;

    armaSel = revolver;

    cout << armaSel;

    return 0;
}
