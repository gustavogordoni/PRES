#include <iostream>
#include <locale>

using namespace std;

/*
12) Construir um programa que calcule a média
aritmética de 20 valores inteiros positivos,
fornecidos pelo usuário. Exiba o resultado da média.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    float mean = 0, sum = 0;
    const int qntNumbers = 20;

    for(i = 0; i < qntNumbers; i++){
        float number;
        cout << "Informe um número natural (inteiro positivo): ";
        cin >> number;

        if(number >= 0){
            sum += number;
        }
    }

    mean = sum / qntNumbers;
    cout << "\n\nA média aritmética dos valores informados é: " << mean << endl << endl;

    return 0;
}
