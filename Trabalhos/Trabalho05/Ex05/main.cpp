#include <iostream>
#include <locale>

using namespace std;

/*
5. Escreva um programa para ler um valor e escrever se é positivo ou negativo.
Considere o valor zero como positivo.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float value;

    cout << "Informe um valor numérico: ";
    cin >> value;

    if(value >= 0){
        cout << "\nO valor informado é POSITIVO.\n";
    }else{
        cout << "\nO valor informado é NEGATIVO.\n";
    }


    return 0;
}
