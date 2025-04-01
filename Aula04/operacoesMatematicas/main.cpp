#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char input;
    float num1, num2, result;

    cout << "Selecione a opção desejada:" << endl;
    cout << "Tecle + para efetuar a SOMA" << endl;
    cout << "Tecle - para efetuar a SUBTRAÇÃO" << endl;
    cout << "Tecle * para efetuar a MULTIPLICAÇÃO" << endl;
    cout << "Tecle / para efetuar a DIVISÃO" << endl;
    cin >> input;

    if(input == '+' || input == '-' || input == '*' || input == '/'){
        cout << "Informe o PRIMEIRO valor para a operação:" << endl;
        cin >> num1;
        cout << "Informe o SEGUNDO valor para a operação:" << endl;
        cin >> num2;

        switch(input){
            case '+':
                result = num1 + num2;
                cout << "O resulado da operação é: " << result;
            break;
            case '-':
                result = num1 - num2;
                cout << "O resulado da operação é: " << result;
            break;
            case '*':
                result = num1 * num2;
                cout << "O resulado da operação é: " << result;
            break;
            case '/':
                result = num1 / num2;
                cout << "O resulado da operação é: " << result;
            break;
            default:
                cout << "Opção inválida!\n";
        }
    }else{
        cout << "Opção inválida!\n";
    }

    cout << endl;

    return 0;
}
