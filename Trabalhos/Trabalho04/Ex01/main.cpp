#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao, qnt;

    do{
        cout << "Para continuar: Digite qualquer n�mero" << endl;
        cout << "Para encerrar: Digite 0" << endl;
        cin >> opcao;
        qnt++;
        cout << "___________________________________" << endl;
    }while(opcao != 0);

    qnt--;
    cout << "Voc� digitou " << qnt << " n�meros." << endl;
    cout << "___________________________________" << endl;

    return 0;
}
