#include <iostream>

// ####### Part 1 #######

double& Vector::operator[](int i) {
    if (i<0 || size()<=i)
        throw out_of_range{"Vector::operator[]"};
    return elem[i];
}

void f(Vector& v) {
    // ...
    try {   // exceptions here are handled by the handler defined below
        v[vsize()] = 7;     // try to access beyond the end of v
    }

    catch (out_of_range& err) {     // oops: out_of_range error
        // ...handle range error...
        cerr << err.what() << '\n';
    }
    // ...
}

void user(int sz) noexcept {
    Vector v(sz);
    iota(&v[0], &v[sz], 1);     // fill v will 1, 2, 3, 4 ...
    // ...
}

// ####### Part 2 #######

Vector v(-27);          // Chaos

Vector::Vector(int s) {
    if (s<0)
        throw std::length_error{"Vector constructor: negative size"};
    elem = new double[s];
    sz = s;
}

void test() {
    try {
        Vector v(-27);
    }
    catch (std::length_error& err) {
        // handle negative size
    }
    catch (std::bad_alloc& err) {
        // handle memory exhaustion
    }
}

// lidando com a exeção

void test() {
    try {
        Vector v(-27);
    }
    catch (std::length_error&) {       // do soemthing and rethrow
        cerr << "test failed: length error\n";
        throw;      // rethrow
    }
    catch (std::bad_alloc&) {       // Ouch! this program is not designed to handle memory exhaustion
        std::terminate();       // terminate the program
    }
}

// ####### Part 3 #######

        // read the text

// ####### Part 4 #######

double& Vector::operator[](int i) {
    if (RANGE_CHECK && (i<0 || size() <= i))
        throw out_of_range{"Vector::operator[]"};
    return elem[i];
}

void f(const char* p) {
    assert(p!=nullptr);     // p must not be the nullptr
    // ....
}

// ####### Part 5 #######

static_assert(4 <= sizeof(int), "integers are too small");

constexpr double C = 299792.458;         // km/s

void f(double speed) {
    constexpr double local_max = 160.0/(60*60);         // 160km/h == 160.0/(60*60) km/s

    // static_assert(speed<C, "can't go that fast")    // error: speed must be a constant
    static_assert(local_max<C,"can't go that fast");        // OK

}

static_assert(4<=sizeof(int));     // use default message

// em geral static_assert(A, S) imprime S se A não for verdade

int main() {
}