#include <iomanip>
#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3, soma, subtracao, divisao, multiplicacao;
    int resto, num4, num5;

    cout << "Este programa ir� executar algumas opera��es matem�ticas \n";
    cout << "Cinco n�meros ser�o necess�rios.\n \n";

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;
    cout << "Digite o terceiro n�mero: ";
    cin >> num3;
    cout << "Digite o quarto n�mero: ";
    cin >> num4;
    cout << "Digite o quinto n�mero: ";
    cin >> num5;

    /* SOMA */
    soma = num1 + num2;
    cout << "\nA soma do primeiro e segundo do n�mero �: " << soma << endl;

    /* SUBTRA��O */
    subtracao = num3 - num1;
    cout << "A subtra��o do terceiro pelo primeiro n�mero �: " << subtracao << endl;

    /* DIVIS�O */
    divisao = num2 / num1;
    cout << "A divis�o do segundo n�mero pelo primeiro n�mero: " << divisao << endl;

    /* MULTIPLICA��O */
    multiplicacao = num1 * num2;
    cout << "A multiplica��o do primeiro n�mero pelo segundo n�mero �: " << multiplicacao << endl;

    /* RESTO DA DI */
    resto = num4 % num5;
    cout << "O resto da divis�o do quarto n�mero pelo quinto n�mero �: " << resto << endl;

    return 0;
}
