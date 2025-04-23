#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    float qntHora, valorHora, salario;

    cout << "Digite o quanto você ganha por hora: ";
    cin >> valorHora;
    cout << "Digite quantas horas você trabalhou esse mês: ";
    cin >> qntHora;

    salario = valorHora * qntHora;

    cout << "\n\nSeu salário total do mês é de R$: " << salario << endl << endl;

    return 0;
}
