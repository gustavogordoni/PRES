#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    /* setlocale(LC_ALL, "Portuguese"); */
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    cout << "---------- Hoje � um dia muito feliz ----------\n\n";
    cout << "-------------  Tenho prova de PES -------------\n";
    cout << "---------------  Vou tirar DEZ ----------------" << endl << endl;

    return 0;
}
