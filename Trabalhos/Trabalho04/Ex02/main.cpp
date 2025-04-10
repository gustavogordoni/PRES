#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char input;
    float num1, num2, result;

    do{
        cout << "------------------------------------------------------\n";
        cout << "Selecione a opção desejada:" << endl;
        cout << "Tecle + para efetuar a SOMA" << endl;
        cout << "Tecle - para efetuar a SUBTRAÇÃO" << endl;
        cout << "Tecle * para efetuar a MULTIPLICAÇÃO" << endl;
        cout << "Tecle / para efetuar a DIVISÃO" << endl;
        cout << "Tecle S para sair" << endl;
        cout << "------------------------------------------------------\n";
        cin >> input;

        if(input == '+' || input == '-' || input == '*' || input == '/'){
            cout << "Informe o PRIMEIRO valor para a operação:" << endl;
            cin >> num1;
            cout << "Informe o SEGUNDO valor para a operação:" << endl;
            cin >> num2;

            switch(input){
                case '+':
                    result = num1 + num2;
                    cout << "O resulado da operação é: " << result << endl;
                break;
                case '-':
                    result = num1 - num2;
                    cout << "O resulado da operação é: " << result << endl;
                break;
                case '*':
                    result = num1 * num2;
                    cout << "O resulado da operação é: " << result << endl;
                break;
                case '/':
                    result = num1 / num2;
                    cout << "O resulado da operação é: " << result << endl;
                break;
                default:
                    cout << "Opção inválida!\n";
            }
        }
        else{
            if(input == 'S' || input == 's'){
                cout << endl << "Até breve!";
            }else{
                cout << endl << "Opção inválida!\n";
                input = '+';
            }
        }

    }while(input == '+' || input == '-' || input == '*' || input == '/');

    cout << endl;

    return 0;
}
