#include <iostream>
#include <iterator>
#include <list>
#include <ostream>

using namespace std;

int main() {
    
    // List

    list<int> aula, teste;
    int tam;
    list<int>::iterator it;

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    tam = 10;

    for (int i=0; i<tam; i++){
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 0);

    aula.erase(--it);

    // aula.clear();

    aula.merge(teste);

    cout << "tamanho: " << aula.size() << endl;

    tam = aula.size();

    for (int i=0; i<tam; i++){
        cout << aula.front() << endl;
        aula.pop_front();
    }
    
    return 0;
}