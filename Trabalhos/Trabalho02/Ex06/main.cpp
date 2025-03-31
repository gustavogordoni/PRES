#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio, pi = 3.14159265358979323846, area;

    cout << "Informe o valor de um raio de um círculo: ";
    cin >> raio;
    area = pi * (raio * raio);

    cout << "Esse círculo possui " << area << setprecision(2) << " de área.";

    return 0;
}
