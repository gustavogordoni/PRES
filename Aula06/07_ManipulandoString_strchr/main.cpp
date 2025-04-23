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

    /* strchr */

    char text[] = "Este exemplo busca por um determinado caracter dentro de uma string";
    char *ptr;

    cout << "Procurando por 's' no texto: \n\n" << text << endl << endl;
    ptr = strchr(text, 's');

    if(*ptr){
    cout << "A letra 's' apareceu a primeira vez na posição: " << ptr-text+1 << endl;

    }else{
        cout << "Letra não encontrada no texto." << endl;
    }

    return 0;
}
