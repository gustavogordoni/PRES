#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    bool num1, num2;

    cout << "Operadores Lógicos\n";
    cout << "Digite 2 números\n";
    cin >> num1 >> num2;

    cout << "A negação do primeiro número é: " << !num1 << endl;
    cout << "A operação AND entre o primeiro número e o segundo número é: " << (num1 && num2) << endl;
    cout << "A operação OR entre o primeiro número e o segundo número é: " << (num1 || num2) << endl;

    return 0;
}
