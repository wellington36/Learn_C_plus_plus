#include <iostream>
#include <stack>

using namespace std;

int main() {
    
    // Pilhas/Stack (push, pop, top, size)

    stack <string> cartas;

    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ouros");
    cartas.push("rei de paus");

    cout << "o tamanho da pilha é: " << cartas.size() << endl;

    cout << "carta do topo: " << cartas.top() << endl;

    cartas.pop();

    cout << "o tamanho da pilha é: " << cartas.size() << endl;

    cout << "nova carta do topo: " << cartas.top() << endl;

    return 0;
}
