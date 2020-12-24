#include <iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main() {
    
    // Struct (equal class in python)

    Carro car1;

    car1.nome = "Tornado";
    car1.cor = "Vermelho";
    car1.pot = 450;
    car1.velMax = 350;

    cout << car1.nome << endl;
    cout << car1.cor << endl;
    cout << car1.pot << endl;
    cout << car1.velMax << endl;
    
    return 0;
}