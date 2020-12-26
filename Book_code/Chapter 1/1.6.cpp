#include <iostream>
#include <math.h>
#include <vector>

constexpr double square(double x) { // example
  return x * x;
}

constexpr double nth(double x, int n){ // assume 0 <= n
    double res = 1;
    int i = 0;
    while (i < n){      // while-loop: do while the condition is true
        res*=x;
        ++i;
    }
    return res;        // is a constant
}

double sum(std::vector<double> v) {
  return 2.3; // Apenas para testar
}

int main(){
    constexpr int dmv = 17;       // dmv is a named constant
    int var = 17;                 // var isn't a constant
    const double sqv = sqrt(var); // sqv is a named constant, possibly computed at run time

    // double sum(const std::vector<double>&); // error: sum will not modify its argument

    std::vector<double> v {1.2, 3.4, 4.5};     // v isn't a constant
    const double s1 = sum(v);                  // OK: sum(v) is evaluated at run time
    // constexpr double s2 = sum(v);           // error: sum(v) is not a constant expression

    constexpr double max1 = 1.4*square(17);       // Ok, 1.4*square(17) is a constant expression
    // constexpr double max2 = 1.4*square(var);   // error: var isn't a constant expression
    const double max3 = 1.4*square(var);          // Ok, may be evaluated at run time
}