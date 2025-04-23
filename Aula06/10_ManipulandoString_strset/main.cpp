#include <iostream>
#include <locale>
#include <cstring>

#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    /* strset */

    char work[20];
    cout << "Exemplo que substitui caracter de uma palavra." << endl;
    cout << "Digite uma palavra: " << endl;
    cin >> work;
    cout << "Substituindo " << strset(work, '*') << endl;

    return 0;
}
