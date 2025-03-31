#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float metros = 0, centimetros = 0;

    cout << "Informe uma distância em metros: ";
    cin >> metros;
    centimetros = metros * 100;

    cout << metros << " metro(s) correspondem a: " << centimetros << "cm.";
    return 0;
}
