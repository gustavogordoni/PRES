#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salarioBruto, salarioLiquido, imposto;

    cout << "Informe o valor de seu salário: ";
    cin >> salarioBruto;

    imposto = salarioBruto * 0.07;
    salarioLiquido = salarioBruto - imposto;

    cout << "Salário bruto: R$" << salarioBruto << endl;
    cout << "Imposto: R$" << imposto << endl;
    cout << "Salário líquido: R$" << salarioLiquido << endl;

    return 0;
}
