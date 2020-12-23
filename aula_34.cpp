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

    void put(){
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

    Carro car1;

    car1.insert("Tornado", "Vermelho", 450, 350);

    car1.muda_vel(500);

    car1.put();

    car1.muda_vel(-100);

    car1.put();
    
    return 0;
}