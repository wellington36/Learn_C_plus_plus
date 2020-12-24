#include <iostream>

using namespace std;

int fat(int n, int aux=1);
int fib(int n, int a = 1, int b = 1, int cont = 0);

int main() {
    
    cout << fib(6) << endl;

    cout << fat(6) << endl;

    return 0;
}

int fib(int n, int a, int b, int cont){
    if (n != cont){
        fib(n, b, a + b, cont + 1);
    }else{
        return b;
    }
}

int fat(int n, int aux){
    if (n != 0){
        fat(n - 1, aux*n);
    }else{
        return aux;
    }
}
