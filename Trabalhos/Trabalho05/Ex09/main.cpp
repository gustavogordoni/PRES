#include <iostream>
#include <locale>

using namespace std;

/*
9. Escreva um programa para ler um n�mero inteiro
(considere que ser�o lidos apenas valores positivos
e inteiros) e escrever se � par ou �mpar.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int number;

    cout << "Informe um n�mero inteiro: ";
    cin >> number;

    if(number % 2 == 0){
        cout << "O n�mero informado � PAR.";
    }else{
        cout << "O n�mero informado � �MPAR.";
    }

    return 0;
}
