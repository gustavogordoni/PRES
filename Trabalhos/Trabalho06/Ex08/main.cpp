#include <iostream>
#include <locale>
#include <cstring>

#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int number, i;
    string option = "S";

    while(option == "S" || option == "s"){
        cout << "Você deseja imprimir uma tabuada?\n";
        cout << "Digite: (S - para SIM) ou (N - para NÃO): ";
        cin >> option;

        if(option == "S" || option == "s"){
            cout << "\nInforme um número para que seja apresentada a Tabuada: ";
            cin >> number;

            if(number > 0 && number <= 9){
                cout << "\nTabuada do " << number;
                cout << "\n******************";
                for (i = 1; i <= 10; i++){
                    cout  << endl << i << " X " << number << " = " << (i * number);
                }
                cout << "\n******************\n\n\n";
            }else{
                cout << "\Número inválido! Espera-se um valor entre 1 e 9.\n\n";
            }

        }else if(option != "N" && option != "n"){
            cout << "\nOpção inválida!\n\n";
            option = "S";
        }
    }

    return 0;
}
