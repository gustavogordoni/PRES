#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1, num2;

    cout << "Informe um primeiro número: ";
    cin >> num1;
    cout << "Informe um segundo número: ";
    cin >> num2;

    cout << "A soma dos números é: " << num1 + num2 << endl;

    return 0;
}
