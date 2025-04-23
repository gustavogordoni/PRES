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

    /* strrchr */

    char text[] = "Este exemplo busca por um determinado caracter dentro de uma string";
    char *ptr;

    cout << "Procurando por 's' no texto: \n\n" << text << endl << endl;
    ptr = strrchr(text, 's');

    if(*ptr){
    cout << "A letra 's' apareceu a �ltima vez na posi��o: " << ptr-text+1 << endl;

    }else{
        cout << "Letra n�o encontrada no texto." << endl;
    }

    return 0;
}
