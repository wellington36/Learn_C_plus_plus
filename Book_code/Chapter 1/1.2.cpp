#include <iostream>

// part 1

/*
int main(){
    std::cout << "Hello, World!\n";
}
*/

// part 2

double square(double x){
    return x*x;
}

void print_square(double x){
    std::cout << "the square of " << x << " is " << square(x) << "\n";
}

int main(){
    print_square(1.234);
}