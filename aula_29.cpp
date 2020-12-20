#include <iostream>
#include <stack>

using namespace std;

int main() {
    
    // Pilhas/Stack 

    stack <string> cartas;

    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ouros");
    cartas.push("rei de paus");

    cout << "a pilha cartas está vazia? " << cartas.empty() << endl;

    return 0;
}
