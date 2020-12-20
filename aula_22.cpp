#include <iostream>

using namespace std;

void text();

void soma(double argumento_1, double argumento_2);

double soma2(double argumento_1, double argumento_2);

void tr(string tra[4]);

int main() {

    double result;
    string transp[4] = {"carro", "moto", "barco", "aviso"};

    soma(32472, 21348);
    soma(23.3123, 23.32131);

    result = soma2(21314, 213124);
    cout << result << endl;

    tr(transp);

    return 0;
}

void text(){
    cout << endl << "Hello World!!." << endl << endl;
}

void soma(double argumento_1, double argumento_2) {
    cout << argumento_1 + argumento_2 << endl;
}

double soma2(double argumento_1, double argumento_2) {
    return argumento_1 + argumento_2;
}

void tr(string tra[4]){
    for(int i=0; i<4; i++){
        cout << tra[i] << endl;
    }
}