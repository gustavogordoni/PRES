#include <iostream>
#include <locale>
#include <windows.h>
#include <cstring>

using namespace std;

int main()
{
    /* setlocale(LC_ALL, "Portuguese"); */
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    string name;
    int brother, age;
    const int year = 2025;

    cout << "       Bom dia..." << endl << endl;

    cout << "   Qual � o seu nome: ";
    getline(cin, name);

    cout << "\n   Quantos irm�os voc� t�m: ";
    cin >> brother;

    cout << "\n   Qual � a sua idade: ";
    cin >> age;

    cout << "\n\nEnt�o voc� se chama " << name << ", tem " << brother << " irm�os, e nasceu em " << (year - age) << "?" << endl;

    return 0;
}
