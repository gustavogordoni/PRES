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

    cout << "Digite o quanto voc� ganha por hora: ";
    cin >> valorHora;
    cout << "Digite quantas horas voc� trabalhou esse m�s: ";
    cin >> qntHora;

    salario = valorHora * qntHora;

    cout << "\n\nSeu sal�rio total do m�s � de R$: " << salario << endl << endl;

    return 0;
}
