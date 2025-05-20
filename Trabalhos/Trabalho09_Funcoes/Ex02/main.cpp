#include <iostream>
#include <locale>

using namespace std;

float CelsiusForFahrenheit (float);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float tempFahrenheit;

    cout << "Informe uma temperatura em °F: ";
    cin >> tempFahrenheit;

    cout << endl << tempFahrenheit << "°F equivale a: " << CelsiusForFahrenheit(tempFahrenheit) << "°C." << endl << endl;

    return 0;
}

float CelsiusForFahrenheit(float temp){
    return (temp - 32) * 5 / 9;
}
