#include <iostream>
#include <iterator>
#include <list>
#include <ostream>

using namespace std;

int main() {
    
    // List

    list<int> aula;
    int tam;
    list<int>::iterator it;

    tam = 10;

    for (int i=0; i<tam; i++){
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it, 5);

    aula.insert(it, 0);

    cout << "tamanho: " << aula.size() << endl;

    aula.sort();
    aula.reverse();

    tam = aula.size();

    for (int i=0; i<tam; i++){
        cout << aula.front() << endl;
        aula.pop_front();
    }



    return 0;
}
