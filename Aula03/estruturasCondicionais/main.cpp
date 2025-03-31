#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*
    --> SINTAXE:
    if (condição_lógica)
        comando; // uma única linha
    if (condição_lógica)
    {// início do if
        comandos; //vários comandos
    } // final do if
    */

    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;

    if(idade >= 18){
        cout << "Você é maior de idade" << endl;
    }else{
        cout << "Você é menor de idade" << endl;
    }

    return 0;
}
