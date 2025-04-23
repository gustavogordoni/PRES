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

    cout << "   Qual é o seu nome: ";
    getline(cin, name);

    cout << "\n   Quantos irmãos você têm: ";
    cin >> brother;

    cout << "\n   Qual é a sua idade: ";
    cin >> age;

    cout << "\n\nEntão você se chama " << name << ", tem " << brother << " irmãos, e nasceu em " << (year - age) << "?" << endl;

    return 0;
}
