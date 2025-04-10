#include <iostream>
#include <locale>

using namespace std;

/*
    6. Reescreva o programa do exercício anterior (exercício 5)
considerando o zero como neutro, ou seja, se for digitado o
valor zero, escrever a palavra zero.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float value;

    cout << "Informe um valor numérico: ";
    cin >> value;

    if(value > 0){
        cout << "\nO valor informado é POSITIVO.\n";
    }else if(value < 0){
        cout << "\nO valor informado é NEGATIVO.\n";
    }else{
        cout << "\nO valor informado é NEUTRO.\n";
    }


    return 0;
}
