#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, temp;

    cout << "Informe dois n�meros inteiros: ";
    cin >> a >> b;

    cout << "\nVoc� entrou com: " << a << " E " << b;

    temp = a;
    a = b;
    b = temp;

    cout << "\nTrocados, eles s�o: " << a << " E " << b << endl;

    return 0;
}
