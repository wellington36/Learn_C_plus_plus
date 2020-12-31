#include <iostream>

int main() {
    /*
    int x = 2;
    int y = 3;
    x = y;      // x becomes 3
    // Note: x==y
    */

    /*
    int x = 2;
    int y = 3;
    int* p = &x;
    int* q = &y;    // now p!=q and *p!=*q
    p = q;          // p becomes &y; now p==q, so (obviously) *p == *q
    */

    /*
    int x = 2;
    int y = 3;
    int& r = x;     // r refers to x
    int& r2 = y;    // now r2 refers to y
    r = r2;         // read t
    */

    int x = 7;
    int& r {x};     // bind r to x (r refers to x)
    r = 7;          // assign to whatever r refers to

    // int& r2;     // error: uninitialized reference
    // r2 = 99;     // assign to whatever r2 refers to
}