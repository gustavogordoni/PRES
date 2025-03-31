#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valorHora, salario;
    int qntHora;

    cout << "Informe a o valor da hora trabalhada: ";
    cin >> valorHora;
    cout << "Informe a quantidade de horas trabalhadas no mês: ";
    cin >> qntHora;

    salario = valorHora * qntHora;

    cout << "O salário recebido no mês é: R$" << salario << endl;

    return 0;
}
