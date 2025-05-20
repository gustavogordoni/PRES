#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, temp;

    cout << "Informe dois números inteiros: ";
    cin >> a >> b;

    cout << "\nVocê entrou com: " << a << " E " << b;

    temp = a;
    a = b;
    b = temp;

    cout << "\nTrocados, eles são: " << a << " E " << b << endl;

    return 0;
}
