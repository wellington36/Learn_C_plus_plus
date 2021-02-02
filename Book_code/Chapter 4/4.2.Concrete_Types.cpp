#include <iostream>

// ####### Part 1 #######

class Complex {
    double re, im;    // representation: two doubles
public:
    complex(double r, double i) :re{r}, im{i} {}    // construct complex from two scalars
    complex(double r) :re{r}, im{0} {}              // construct complex from one scalar
    complex() :re{0}, im{0} {}                      // default complex: {0, 0}

    double real() const { return re; }
    void real(double d) { re=d; }
    double imag() const { return im; }
    void imag(double d) { im=d; }

    complex& operator+=(complex z) {
        re+=z.re;       // add to re and im
        im+=z.im;
        return *this;   // and return the result
    }

    complex& operator-=(complex z) {
        re-=z.re;
        im-=z.im;
        return *this;
    }

    complex& operator*=(complex);   // defined out-of-class somewhere
    complex& operator/=(complex);   // defined out-of-class somewhere
};


complex z = {1, 0};
const complex cz {1, 3};
z = cz;             // OK: assigning to a non-const variable
cz = z;             // error: complex::operator=() is non-const member funtion
double x = z.real;  // OK: complex::real() is a const member function

complex operator+(complex a, complex b) { return a+=b; }
complex operator-(complex a, complex b) { return a-=b; }
complex operator-(complex a) { return {-a.real(), -a.imag()}; }     // unary minus
complex operator*(complex a, complex b) { return a*=b; }
complex operator/(complex a, complex b) { return a/=b; }

bool operator==(complex a, complex b) {     // equal
    return a.real() == b.real && a.imag() == b.imag();
}

bool operator!=(complex a, complex b) {     // not equal
    return !(a == b);
}

complex sqrt(complex);      // the definition is elsewhere

// ...

void f(complex z) {
    complex a {2.3};        // construct {2.3, 0.0}
    complex b {1/a};
    complex c {a + z*complex{1, 2.3}};
    // ...
    if (c != b)
        c = - (b/a) + 2*b;
}

// ####### Part 2 #######

// A destructor - realoca memoria que não é mais usada

class Vector {
public:
    Vector(int s) :elem{new double[s]}, sz{s}       // constructor: acquire resources
    {
        for (int i=0; i!=s; ++i)    // initialize elements
            elem[i]=0;
    }

    ~Vector() { delete[] elem; }   // destructor: release resources

    double& operator[](int i);
    int size() const;
private:
    double* elem;       // elem points to an array of sz doubles
    int sz;
};

void fct(int n) {
    Vector v(n);
    // ... use v ...
    {
        Vector v2(2*n);
        // ... use v and v2 ...
    }// v2 is destroyed here
    // ... use v ...
}// v is destroyed here

// ####### Part 3 #######

class Vector {
public:
    Vector(std::initializer_list<list>);    // initialize with a list of doubles
    // ...
    void push_back(double);         // add element at end, increasing the size by one
    // ...
};

Vector read(istream& is) {
    Vector v;
    for (double d; is >> d; )       // read floating-pointer values into d
        v.push_back(d);             // add d to v
    return v;
}

Vector v = read(cin);       // no copy of Vector elements here

Vector v1 = {1, 2, 3, 4, 5};
Vector v2 = {1.23, 3.45, 6.7, 8};

Vector::Vector (std::initializer_list<double> lst)
    :elem{new double[lst.size()]}, sz{static_cast<int>(lst.size())}
{
    copy(lst.begin(), lst.end(), elem);     // copy from lst into elem
}
