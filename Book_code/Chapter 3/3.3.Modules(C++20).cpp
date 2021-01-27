#include <iostream>

// file Vector.cpp:

module;     //  this compilation will define a module

// ... here we put stuff that Vector might need fot its implementation ...

export module Vector;       // defining the module called "Vector"

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

export int size(const Vector& v) { return v.size(); }

int main() {
    // Modules (C++20)    
}