#include <iostream>
#include <locale>

using namespace std;

/*
9. Escreva um programa para ler um número inteiro
(considere que serão lidos apenas valores positivos
e inteiros) e escrever se é par ou ímpar.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int number;

    cout << "Informe um número inteiro: ";
    cin >> number;

    if(number % 2 == 0){
        cout << "O número informado é PAR.";
    }else{
        cout << "O número informado é ÍMPAR.";
    }

    return 0;
}
