#include <iostream>
#include <locale>

using namespace std;

float divisao (int, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    cout << "Informe dois n�meros inteiros: ";
    cin >> num1 >> num2;
    cout << "A divis�o de " << num1 << " por " << num2 << " � igual a: " << divisao(num1, num2) << endl;

    return 0;
}

float divisao(int a, int b){
    return a / b;
}
