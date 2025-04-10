#include <iostream>
#include <locale>

using namespace std;

/*
11) Escrever um programa que leia 15 n�meros,
um de cada vez, e conte quantos destes valores
s�o negativos. Exiba a quantidade de n�meros negativos
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

    cout << "\nQuantidade de n�meros NEGATIVOS: " << qntNegative << endl;

    return 0;
}
