#include <iostream>

using namespace std;

void soma(int n1, int n2);

void soma();

int main() {
    
    // 2 funções com mesmo nome, mas entradas diferentes.

    soma();

    soma(10, 20);

    return 0;
}

void soma(int n1, int n2){
    int re;

    re = n1 + n2;
    cout << re << endl;

}

void soma(){
    int re, n1, n2;

    n1 = 10;
    n2 = 20;

    re = n1 + n2;
    cout << re << endl;

}
