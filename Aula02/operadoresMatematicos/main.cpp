#include <iomanip>
#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3, soma, subtracao, divisao, multiplicacao;
    int resto, num4, num5;

    cout << "Este programa irá executar algumas operações matemáticas \n";
    cout << "Cinco números serão necessários.\n \n";

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite o terceiro número: ";
    cin >> num3;
    cout << "Digite o quarto número: ";
    cin >> num4;
    cout << "Digite o quinto número: ";
    cin >> num5;

    /* SOMA */
    soma = num1 + num2;
    cout << "\nA soma do primeiro e segundo do número é: " << soma << endl;

    /* SUBTRAÇÃO */
    subtracao = num3 - num1;
    cout << "A subtração do terceiro pelo primeiro número é: " << subtracao << endl;

    /* DIVISÃO */
    divisao = num2 / num1;
    cout << "A divisão do segundo número pelo primeiro número: " << divisao << endl;

    /* MULTIPLICAÇÃO */
    multiplicacao = num1 * num2;
    cout << "A multiplicação do primeiro número pelo segundo número é: " << multiplicacao << endl;

    /* RESTO DA DI */
    resto = num4 % num5;
    cout << "O resto da divisão do quarto número pelo quinto número é: " << resto << endl;

    return 0;
}
