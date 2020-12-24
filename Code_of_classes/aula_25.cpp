#include <iostream>

using namespace std;

void contador2(int num, int cont=0);

void contador(int num);

int main() {
    
    // contador(10);
    contador2(10);

    return 0;
}

void contador(int num){
    // contador O(n)
    for(int i=0; i<=num; i++){
        cout << i << endl;
    }
}

void contador2(int num, int cont){
    // contador O(k), com k constante
    cout << cont << endl;
    if (num > cont){
        contador2(num, ++cont);
    }
}