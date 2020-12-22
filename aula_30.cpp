#include <iostream>
#include <queue>

using namespace std;

int main() {
    
    // Fila/Queue (empty, size, front, back, push, pop)

    queue <string> cartas;

    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ouros");
    cartas.push("rei de paus");

    cout << "tamanho da fila: " << cartas.size() << endl;

    cout << "na frente da fila: " << cartas.front() << endl;

    cout << "ultima da fila: " << cartas.back() << endl;

    while (!cartas.empty()){
        cout << "primera carta: " << cartas.front() << endl;
        cartas.pop();
    }

    return 0;
}
