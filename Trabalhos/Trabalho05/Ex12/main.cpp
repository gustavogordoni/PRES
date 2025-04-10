#include <iostream>
#include <locale>

using namespace std;

/*
12) Construir um programa que calcule a m�dia
aritm�tica de 20 valores inteiros positivos,
fornecidos pelo usu�rio. Exiba o resultado da m�dia.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    float mean = 0, sum = 0;
    const int qntNumbers = 20;

    for(i = 0; i < qntNumbers; i++){
        float number;
        cout << "Informe um n�mero natural (inteiro positivo): ";
        cin >> number;

        if(number >= 0){
            sum += number;
        }
    }

    mean = sum / qntNumbers;
    cout << "\n\nA m�dia aritm�tica dos valores informados �: " << mean << endl << endl;

    return 0;
}
