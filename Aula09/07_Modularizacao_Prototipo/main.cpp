#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

float capacidade (float, float, float);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float comprimento, larg, alt;

    cout << "Programa para calcular a capacidade de água de uma piscina: " << endl << endl;
    cout << "Digite o comprimento da piscina: ";
    cin >> comprimento;
    cout << "Digite a largura da piscina: ";
    cin >> larg;
    cout << "Digite o altura da piscina: ";
    cin >> alt;

    cout << "\n\nA piscina possui: " << capacidade(comprimento, larg, alt) << " metros cúbicos.\n\n";

    return 0;
}

float capacidade (float comprimento, float largura, float altura){
    return comprimento * largura * altura;
}
