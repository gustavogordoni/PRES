#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario = 1000, comissao = 5, valorVendas, salarioFinal;

    cout << "Digite o valor total de vendas no m�s \n";
    cin >> valorVendas;
    salarioFinal = salario + (( valorVendas * comissao) / 100);
    cout << "O sal�rio final � \n R$" << salarioFinal;

    return 0;
}
