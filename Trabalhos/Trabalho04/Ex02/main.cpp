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
        cout << "Selecione a op��o desejada:" << endl;
        cout << "Tecle + para efetuar a SOMA" << endl;
        cout << "Tecle - para efetuar a SUBTRA��O" << endl;
        cout << "Tecle * para efetuar a MULTIPLICA��O" << endl;
        cout << "Tecle / para efetuar a DIVIS�O" << endl;
        cout << "Tecle S para sair" << endl;
        cout << "------------------------------------------------------\n";
        cin >> input;

        if(input == '+' || input == '-' || input == '*' || input == '/'){
            cout << "Informe o PRIMEIRO valor para a opera��o:" << endl;
            cin >> num1;
            cout << "Informe o SEGUNDO valor para a opera��o:" << endl;
            cin >> num2;

            switch(input){
                case '+':
                    result = num1 + num2;
                    cout << "O resulado da opera��o �: " << result << endl;
                break;
                case '-':
                    result = num1 - num2;
                    cout << "O resulado da opera��o �: " << result << endl;
                break;
                case '*':
                    result = num1 * num2;
                    cout << "O resulado da opera��o �: " << result << endl;
                break;
                case '/':
                    result = num1 / num2;
                    cout << "O resulado da opera��o �: " << result << endl;
                break;
                default:
                    cout << "Op��o inv�lida!\n";
            }
        }
        else{
            if(input == 'S' || input == 's'){
                cout << endl << "At� breve!";
            }else{
                cout << endl << "Op��o inv�lida!\n";
                input = '+';
            }
        }

    }while(input == '+' || input == '-' || input == '*' || input == '/');

    cout << endl;

    return 0;
}
