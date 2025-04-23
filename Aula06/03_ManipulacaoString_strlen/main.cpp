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

    /* strlen */

    char word[20];
    cout << "Digite uma palavra: ";
    cin >> word;

    cout << "A palavra tem " << strlen(word) << " letras. " << endl;

    return 0;
}
