#include <iostream>

using namespace std;

int main() {

    // Ponteiro

    string veiculo="Carro";
    string *pv;

    pv =& veiculo; //ponte recebe o endereço de veiculo

    cout << pv << endl << &veiculo << endl;

    *pv = "Moto"; //mudança de endereço de memoria

    cout << veiculo << endl << *pv << endl;

    return 0;
}