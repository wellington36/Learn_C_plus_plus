#include <iostream>
#include <ostream>
#include <string>

using namespace std;

void print(int n){
    cout << n << endl;
}

void print(double x){
    cout << x << endl;
}

void print(string str){
    cout << str << endl;
}

void user(){
    print(42);
    print(9.65);
    print("Barcelona");
}

int main(){
    user();
}