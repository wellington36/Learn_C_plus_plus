#include <iostream>
#include <cmath>
// #include "Vector.h"      // other file

// Vector.h

class Vector {
    public:
        Vector(int s);
        double& operator[](int i);
        int size();
    private:
        double* elem:
        int sz;
};

Vector::Vector(int s)
    :elem{new double[s]}, sz{s}     // initialize members
{
}

double& Vector::operator[](int i) {
    return elem[i];
}

int Vector::size() {
    return sz;
}

double sqrt_sum(Vector& v) {
    double sum = 0;

    for (int i = 0; i!=v.size(); ++i) {
        sum+=std::sqrt(v[i]);
    }
    return sum;
}

int main() {
    // Separate Compilation
}