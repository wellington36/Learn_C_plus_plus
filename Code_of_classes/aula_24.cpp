#include <iostream>

using namespace std;

void imp(string txt="Wellington");

int main() {
    
    // Na linha 5, omissão de argumento
    
    imp();
    imp("oito");
    
    return 0;
}

void imp(string txt){
    cout << endl << txt << endl;
}