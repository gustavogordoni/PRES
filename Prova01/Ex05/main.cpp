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

    cout << "Informe um número inteiro positivo para iniciar a música: ";
    cin >> numero;

    for(index = 0; index < numero ; index++){
        cout << endl << (numero - index) << " patinhos foram pasear.\n";
        cout << "Além das montanhas para brincar.\n";
        cout << "A mamãe gritou: Quá, quá, quá, quá.\n";
        cout << "Mas só " << (numero - index - 1) << " patinhos voltaram de lá.\n\n\n";
    }

    cout << "****************************************";

    return 0;
}
