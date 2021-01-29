#include <iostream>

int sum(const vector<int>& v) {
    int s = 0;

    for (const int i : v)
        s += i;
    return s;
}

vector fib = {1, 2, 3, 5, 8, 13, 21};
// int x = sum(fib);        x becomes 53

// ####### Part 1 #######

void test(vector<int> v, vector<int>& rv) {     // v is passed by value; rv is passed by reference
    v[1] = 99;          // modify v (a local variable)
    rv[2] = 66;         // modify whatever rv refers to
}

/*
int main() {
    vector fib = {1, 2, 3, 5, 8, 13, 21};
    test(fib, fib);
    std::cout << fib[1] << ' ' << fib[2] << '\n';        // prints 2 66
}
*/

/*
void print(int value, int base = 10);   // print value in base "base"

print(x, 16);       // hexadecimal
print(x, 60);       // sexagesimal (Sumerian)
print(x);
*/

void print(int value, int base);       // print value in base "base"

void print(int value) {             // print value in base 10
    print(value, 10);
}

// ####### Part 2 #######

class  Vector {
public:
    // ...
    double& operator[](int i) { return elem[i]; }    // return reference to ith element
private:
    double* elem;       // elem points to an array of sz
    // ...
};

int& bad() {
    int x;
    // ...
    return x;  // bad: return a reference to the local variable x
}


Matrix operator+(const Matrix& x, const Matrix& y) {

    Matrix res;
    // ... for all res[i, j], res[i, j] = x[i, j] + y[i, j] ...
    return res
}

Matrix m1, m2;
// ...
Matrix m3 = m1 + m2;    // no copy


/*          Example BAD CODE
Matrix* add(const Matrix& x, const Matrix& y) {   // complicated and error-prone 20th century style

    Matrix* p = new Matrix;
    // ...
    return p
}

Matrix m1, m2;
// ...
Matrix* m3 = add(m1, m2);       // just copy a pointer
// ...
delete m3;                      // easily forgotten
*/

auto mul(int i, double d) { return i*d }    // here, "auto" means "deduce the return type"

// ####### Part 3 #######

struct Entry {
    string name;
    int value;
};

Entry read_entry(istream& is) {     // naive read function (for a better version)
    string s;
    int i;
    is >> s >> i;
    return {s, i};
}

auto e = read_entry(cin);
std::cout << "{" << e.name << ", " << e.value << "}\n";

auto [n, v] = read_entry(is);
std::cout << "{" << n << ", " << v << "}\n";

// Another exampler:

map<string, int> m;
// ... fill m ...
for (const auto [key, value] : m)
    std::cout << "{" << key  << "," << value << "}\n";

void incr(map<string, int>& m) {    // increment the value of each element of m
    for (auto& [key, value] : m)
        ++value;
}

complex<double> z = {1, 2};
auto [re, im] = z+2;         // re = 3; im = 2