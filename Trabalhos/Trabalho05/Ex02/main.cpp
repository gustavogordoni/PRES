#include <iostream>
#include <locale>

using namespace std;

/*
    2. Escreva um programa em C++ que exiba as quatro mensagens:
    Meu nome é: <seu nome>.
    Sou do curso de Sistemas de Informação.
    Estou no primeiro ano.
    Gosto de programação!!!
**/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const string name = "Gustavo Luiz Gordoni";

    cout << "Meu nome é: " << name << endl << endl;
    cout << "Sou do curso de Sistemas de Informação.\n\n";
    cout << "Estou no primeiro ano.\n\n";
    cout << "Gosto de programação!!!\n\n";

    return 0;
}
