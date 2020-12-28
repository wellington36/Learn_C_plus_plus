#include <iostream>
#include <vector>

void copy_fct(){
    int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[10];                 // to become a copy of v1

    for (auto i=0; i!=10; i++){ // copy elements
        v2[i] = v1[i];
    }
    // ...
}

void print(){
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto x : v)                  // for each x in v
        std::cout << x << std::endl;
    
    for (auto x : {10, 21, 32, 43, 54, 65})
        std::cout << x << std::endl;
}

void increment(){
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto& x : v)   // add 1 to each x in v
        ++x;            // & is "reference to"

    for (int i=0; i!=10; ++i)
        std::cout << v[i] << std::endl;
}

void sort(std::vector<double>& v);      // sort v (v is a vector of doubles)

double sum(const std::vector<double>&); // with const não temos o custo da copy

int count_x(const char* p, char x){
// count the number of occurrences of x in p[]
// p is assumed to point to a zero-ter minated array of char (or to nothing)

if (p==nullptr)
    return 0;
int count = 0;
while (*p) {
    if (*p==x)
        ++count;
    ++p;
}
return count;
}

int main(){

    // Part 1

    /*
    char v[6];       // array of 6 characters
    char* p;         // poiter to character


    char* p = &v[3]; // p points to v's fourth element
    char x = *p      // *p is the object that p point to
    */

    // Part 2

    copy_fct();

    print();

    increment();

    // Part 3

    /*
    T a[n]      // T[n]: a is an array of n T's
    T* p        // T*: p is a pointer to T
    T& r        // T&: r is a reference to T
    T f(A)      // T(A): f is a function taking an argument of type A returning a result of type T
    */
    
    // Part 4 - The Null pointer

    char* pd = nullptr;
    // Link<Record>* lst = nullptr; // pointer to a Link to a Record (define Record)
    // int x = nullptr;             // error: nullptr is a pointer not an integer
}