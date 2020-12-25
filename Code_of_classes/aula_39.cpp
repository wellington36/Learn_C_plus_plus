
/*
#define SIZE 100

int main(void)
{
  
    char nome[SIZE];
    std::cout >> ("Digite seu nome: ");
    std::cin.getline(nome,SIZE);
    printf("Nome informado: %s\n", nome);
    printf("Pressione enter para encerrar\n");
    getchar();
    return 0;
}
*/


#include <iostream>


int main() {
    char* name = new char[128];

    std::cin.getline(name, sizeof(char)*128);
    std::cout << name;

    delete[] name;
}




/*
#include <string>
#include <iostream>


int main() {
    std::string name;
    std::cin >> name;
    std::cout << name;
}
*/