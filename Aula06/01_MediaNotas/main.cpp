#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    float value1, value2, value3, mean;
    string name;

    cout << "Informe seu nome: ";
    getline(cin, name);

    cout << "Informe o valor da nota 01: ";
    cin >> value1;
    cout << "Informe o valor da nota 02: ";
    cin >> value2;
    cout << "Informe o valor da nota 03: ";
    cin >> value3;

    mean = (value1 + value2 + value3) / 3;

    cout << name << ", a média de suas notas é: " << mean << endl;
    return 0;
}
