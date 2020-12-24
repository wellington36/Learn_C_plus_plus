#include <iostream>

using namespace std;

int main() {

    int *p;
    int vetor[10];

    p = vetor;
    *p = 10;

    cout << p << endl;

    cout << (p+=1) << endl;

    *p = 20;
    
    cout << *p << endl << vetor << endl;

    return 0;
}