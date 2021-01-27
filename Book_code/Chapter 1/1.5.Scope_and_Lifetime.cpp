#include <iostream>
#include <type_traits>
#include <vector>

std::vector<int> vec; // vec is a global vector

struct Record {
    std::string name; // name is a member of Record
    // ...
}

void fct(int arg){ // fct is global
                   // arg is local
    std::string motto {"Who dares wins"}; // motto is local
    auto p = new Record{"Hume"};          // p points to an unnamed Record
}