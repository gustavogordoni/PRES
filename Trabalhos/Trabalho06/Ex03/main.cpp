#include <iostream>
#include <locale>
#include <windows.h>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    string product;
    float value, valuePay;
    char option;

    cout << "Qual é o produto? ";
    getline(cin, product);

    cout << "\nQual é o valor do produto? ";
    cin >> value;

    cout << "\nDe acordo com o menu abaixo, informe como deseja pagar:  \n";
    cout << "1 - Pagamento à vista (10% desconto).\n";
    cout << "2 - Pagamento com 30 dias de prazo (sem desconto).\n";
    cout << "3 - Pagamento em 10x (Cartão de crédito - sem desconto - sem acréscimos).\n";
    cout << "4 - Pagamento em 10x (Boleto - 10% acréscimo).\n";
    cin >> option;

    switch(option){
        case '1':
            valuePay = value - (value * 0.1);
            cout << "\nO valor do produto com desconto é: R$" << valuePay << endl;
        break;
        case '2':
            valuePay = value;
            cout << "\nO valor do produto para pagamento com 30 dias é: R$" << valuePay << endl;
        break;
        case '3':
            valuePay = value;
            cout << "\nO valor do produto em 10x no cartão é: R$" << valuePay << endl;
            cout << "\nO valor de cada parcela será de: R$" << (valuePay / 10) << endl;
        break;
        case '4':
            valuePay = value + (value * 0.1);
            cout << "\nO valor do produto em 10x no boleto é: R$" << valuePay << endl;
        break;
        default:
            cout << "\nOpção inválida!\n";
    }

    return 0;
}
