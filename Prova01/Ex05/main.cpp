#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int numero = 0, index = 0;

    cout << "Informe um n�mero inteiro positivo para iniciar a m�sica: ";
    cin >> numero;

    for(index = 0; index < numero ; index++){
        cout << endl << (numero - index) << " patinhos foram pasear.\n";
        cout << "Al�m das montanhas para brincar.\n";
        cout << "A mam�e gritou: Qu�, qu�, qu�, qu�.\n";
        cout << "Mas s� " << (numero - index - 1) << " patinhos voltaram de l�.\n\n\n";
    }

    cout << "****************************************";

    return 0;
}
