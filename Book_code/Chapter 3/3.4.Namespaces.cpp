#include <iostream>

namespace My_code {
    class complex {
        // ...
    };

    complex srqt(complex);
    // ...
    
    int main();
}

int My_code::main() {
    complex z {1,2};
    auto z2 = sqrt(z);
    std::cout << '{' << z2.real() << ',' << z2.imag() << '}\n';
    // ..
}

int main() {

    // Dentro do namespace os nomes não se mesturam com funções e parametros já existentes em bibliotecas

    return My_code::main;
}