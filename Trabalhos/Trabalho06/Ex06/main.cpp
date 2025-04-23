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

    int number, i;

    cout << "Informe um número para que seja apresentada a Tabuada: ";
    cin >> number;

    cout << "\nTabuada do " << number;
    cout << "\n******************";
    for (i = 1; i <= 10; i++){
        cout  << endl << i << " X " << number << " = " << (i * number);
    }
    cout << "\n******************\n\n\n";

    return 0;
}
