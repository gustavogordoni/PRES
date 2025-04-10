#include <iostream>
#include <locale>

using namespace std;

/*
11) Escrever um programa que leia 15 números,
um de cada vez, e conte quantos destes valores
são negativos. Exiba a quantidade de números negativos
digitados.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, qntNegative = 0;
    const int qntNumbers = 15;

    for(i = 0; i < qntNumbers; i++){
        float number;
        cout << "Informe um valor (positivo ou negativo): ";
        cin >> number;

        if(number < 0){
            qntNegative++;
        }
    }

    cout << "\nQuantidade de números NEGATIVOS: " << qntNegative << endl;

    return 0;
}
