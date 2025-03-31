#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float lado, area;

    cout << "Informe o valor do lado de um quadrado: ";
    cin >> lado;

    area = pow(lado, 2);

    cout << "A área do quadrado é: " << area << endl;
    cout << "O dobro do valor da área do quadrado é: " << area*2 << endl;

    return 0;
}
