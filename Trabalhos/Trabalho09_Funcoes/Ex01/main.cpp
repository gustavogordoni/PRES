#include <iostream>
#include <locale>

using namespace std;

float divisao (int, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    cout << "Informe dois números inteiros: ";
    cin >> num1 >> num2;
    cout << "A divisão de " << num1 << " por " << num2 << " é igual a: " << divisao(num1, num2) << endl;

    return 0;
}

float divisao(int a, int b){
    return a / b;
}
