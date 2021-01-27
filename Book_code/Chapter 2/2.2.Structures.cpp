#include <iostream>

using namespace std;

struct Vector {
    int sz;         // number of elements
    double* elem;   // pointer to elements
};

Vector v;

void vector_init(Vector& v, int s) {
    v.elem = new double[s];     // allocate an array os s doubles
    v.sz = s;
}

double read_and_sum(int s) {
    // read s integers from cin and return their sum, s is assumed to be positive

    Vector v;
    vector_init(v, s);      // allocate s elements for v

    for (int i=0; i!=s; ++i)
        cin >> v.elem[i];   // read into elements
    
    double sum = 0;
    for (int i=0; i!=s; ++i)
        sum+=v.elem[i];     // compute the sum of the elements
    return sum;
}

void f(Vector v, Vector& rv, Vector* pv) {
    int i1 = v.sz;      // access throug name
    int i2 = rv.sz;     // access through reference
    int i3 = pv->sz;    // access through pointer
}

int main() {
    double sum;
    sum = read_and_sum(3);

    cout << sum << endl;
}