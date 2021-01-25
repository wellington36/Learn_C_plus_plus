#include <iostream>

struct Node {
};

enum Type {ptr, num};       // a Type can hold values ptr and num (&2.5)

struct Entry {
    std::string name;       // string is a standard-library type
    Type t;
    Node* p;                // use p if t == ptr;
    int i;                  // i if t == num;

};

void f(Entry* pe) {
    if (pe -> t == num) {
        std::cout << pe -> i;
    }
}

union Value {
    Node* p;
    int i;
};

struct Entry_new {
    std::string name;
    Type t;
    Value v;       // use v.p if t==ptr; use v.i. if t==num
};

void f_new(Entry_new* pe) {
    if (pe -> t == num)
        std::cout << pe -> v.i;
    // ...
}

/* Quando a linguagem não usa union {

    struct Entry {
        string name;
        variant<Node*, int> v;
    };

    void f(Entry* pe) {
        if (holds_alternative<int>(pe->v))
            cout << get<int>(pe -> v);      // get the int
    }
}  */

int main() {
    // Union
}