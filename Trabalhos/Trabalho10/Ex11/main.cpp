#include <iostream>
#include <locale>

using namespace std;

float calculoIMC (float, float);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float peso, alt;

    cout << "Programa para calcular o IMC de uma pessoa: " << endl << endl;
    cout << "Digite o peso: ";
    cin >> peso;
    cout << "Digite a altura: ";
    cin >> alt;

    cout << "\n\nO IMC é: " << calculoIMC(peso, alt) << "\n\n";

    return 0;
}

float calculoIMC (float peso, float altura){
    return peso / (altura * altura);
}
