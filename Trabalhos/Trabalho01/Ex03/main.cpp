#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float tempFahrenheit, tempCelsius;

    cout << "Informe uma temperatura em graus Fahrenheit: ";
    cin >> tempFahrenheit;

    tempCelsius = (tempFahrenheit - 32) * 5 / 9;
    cout << "A convers�o dessa temperatura em Celsius �: " << tempCelsius << endl;

    return 0;
}
