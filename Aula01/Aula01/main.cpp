#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, numero3, resultadoPreliminar, resultadoFinal;

    cout << "Esse programa faz a soma de tr�s n�meros \n";
    cout << "Digite o primeiro n�mero a ser somado: \n";
    cin >> numero1;
    cout << "Digite o segundo n�mero a ser somado: \n";
    cin >> numero2;
    resultadoPreliminar = numero1 + numero2;
    cout << "Digite o terceiro n�mero a ser somado: \n";
    cin >> numero3;
    resultadoFinal = resultadoPreliminar + numero3;
    cout << "O valor da soma �: " << resultadoFinal;

    return 0;
}
