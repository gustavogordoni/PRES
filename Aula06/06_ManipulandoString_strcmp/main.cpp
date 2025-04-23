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

    /* strcmp */

    char word1[20], word2[20];
    cout << "Digite uma palavra 01: ";
    cin >> word1;

    cout << "Digite uma palavra 02: ";
    cin >> word2;

    if(strcmp(word1, word2) == 0){
        cout << "As palavras são iguais.";
    }else{
        cout << "As palavras são diferentes.";
    }

    return 0;
}
