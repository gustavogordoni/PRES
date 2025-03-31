#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, numero3, resultadoPreliminar, resultadoFinal;

    cout << "Esse programa faz a soma de três números \n";
    cout << "Digite o primeiro número a ser somado: \n";
    cin >> numero1;
    cout << "Digite o segundo número a ser somado: \n";
    cin >> numero2;
    resultadoPreliminar = numero1 + numero2;
    cout << "Digite o terceiro número a ser somado: \n";
    cin >> numero3;
    resultadoFinal = resultadoPreliminar + numero3;
    cout << "O valor da soma é: " << resultadoFinal;

    return 0;
}
