#include <iostream>
#include <locale>

using namespace std;

/*
13)Escreva um programa que receba 20 números do
usuário (um de cada vez). Calcule a média dos números
pares digitados.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, qntPairs = 0;
    const int qntNumbers = 20;
    float mean = 0, sum = 0;

    for(i = 0; i < qntNumbers; i++){
        int number;
        cout << "Informe um número: ";
        cin >> number;

        if(number % 2 == 0){
            sum += number;
            qntPairs++;
        }
    }

    mean = sum / qntPairs;
    cout << "\n\nA média dos números pares informados é: " << mean << endl << endl;

    return 0;
}
