#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao, qnt;

    do{
        cout << "Para continuar: Digite qualquer número" << endl;
        cout << "Para encerrar: Digite 0" << endl;
        cin >> opcao;
        qnt++;
        cout << "___________________________________" << endl;
    }while(opcao != 0);

    qnt--;
    cout << "Você digitou " << qnt << " números." << endl;
    cout << "___________________________________" << endl;

    return 0;
}
