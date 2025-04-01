#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    do{
        cout << "Para continuar: Digite qualquer número" << endl;
        cout << "Para encerrar: Digite 0" << endl;
        cin >> opcao;
        cout << "___________________________________" << endl;
    }while(opcao != 0);

    return 0;
}
