#include <iostream>
#include <locale>

using namespace std;

/* 7) Escrever um programa que leia o c�digo do item pedido, a quantidade
do item e calcule o valor a ser pago por aquele lanche.
Considere que a cada execu��o somente ser� calculado um item.
Informe que c�digo inv�lido caso seja digitado algo diferente.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int code, quantity;
    float value, amountPay;

    do{
        cout << "---------------------------------------------\n";
        cout << "|   Especifica��o   |   C�digo  |   Pre�o   |\n";
        cout << "---------------------------------------------\n";
        cout << "|  Cachorro quente  |    100    |    9,20   |\n";
        cout << "|   Bauru simples   |    101    |   12,00   |\n";
        cout << "|   Bauru com ovo   |    102    |   13,00   |\n";
        cout << "|     Hamb�rguer    |    103    |   10,00   |\n";
        cout << "|   Cheeseburguer   |    104    |   12,00   |\n";
        cout << "| Refrigerante Lata |    105    |    5,00   |\n";
        cout << "|        �gua       |    106    |    3,00   |\n";
        cout << "---------------------------------------------\n";
        cout << "|             Digite 0 para SAIR            |\n";
        cout << "---------------------------------------------\n";

        cout << "\nInforme o c�digo do produto: ";
        cin >> code;

        if(code != 0 && code >= 100 && code <= 106) {
            cout << "Informe a quantidade do produto: ";
            cin >> quantity;

            switch(code){
                case 100:
                    value = 9.2;
                break;
                case 101:
                    value = 12;
                break;
                case 102:
                    value = 13;
                break;
                case 103:
                    value = 10;
                break;
                case 104:
                    value = 12;
                break;
                case 105:
                    value = 5;
                break;
                case 106:
                    value = 3;
                break;
                default:
                    cout << "C�digo inv�lido!\n\n";
            }
                amountPay = value * quantity;

                cout << "\nO valor a pagar � de: R$" << amountPay << endl << endl;
        }else if (code != 0 && (code < 100 || code > 106)){
            cout << "C�digo inv�lido!\n\n";
        }

    }while(code != 0);

    cout << "\nAt� breve!\n";
    return 0;
}
