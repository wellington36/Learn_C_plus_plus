#include <iostream>
#include <string>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    void insert(string stnome, string stcor, int stpot, int stvelMax){
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvelMax;
        vel = 0;
    }

    void puts(){
        cout << "\nNome............: " << nome << endl;
        cout << "Cor.............: " << cor << endl;
        cout << "Potencia........: " << pot << endl;
        cout << "Veloc.Maxima....: " << velMax << endl;
        cout << "Velocidade......: " << vel << endl;
    }

    void muda_vel(int mv){
        vel = mv;
        if (vel > velMax){
            vel = velMax;
        }
        if (vel < 0){
            vel = 0;
        }
    }

};

int main() {
    
    // Struct (equal class in python)

    Carro *carros=new Carro[5];

    Carro car1, car2, car3, car4, car5;

    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    carros[3] = car4;
    carros[4] = car5;
    
    // preguiça (pode mudar as entradas)

    carros[0].insert("Tornado", "Vermelhor", 450, 350);
    carros[1].insert("Tornado", "Vermelhor", 450, 350);
    carros[2].insert("Tornado", "Vermelhor", 450, 350);
    carros[3].insert("Tornado", "Vermelhor", 450, 350);
    carros[4].insert("Tornado", "Vermelhor", 450, 350);

    for (int i=0; i<5; i++){
        carros[i].puts();
    }

    return 0;
}