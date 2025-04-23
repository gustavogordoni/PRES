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

    /* strcpy */

    char word1[20], word2[20];
    cout << "Digite uma palavra 01: ";
    cin >> word1;

    cout << "Digite uma palavra 02: ";
    cin >> word2;

    cout << "Palavra 1 = " << word1 << endl;
    cout << "Palavra 2 = " << word2 << endl;
    cout << "Agora Palavra 2 = " << strcpy(word2, word1) << endl;

    return 0;
}
