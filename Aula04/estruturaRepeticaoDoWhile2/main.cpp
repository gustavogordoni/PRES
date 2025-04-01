#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num;
    int opcao;

    cout << "Informe um número: ";
    cin >> num;

    do{
        num++;
        cout << "Sucessor: " << num << endl << endl;
        cout << "Para continuar: Digite 1" << endl;
        cout << "Para encerrar: Digite 0" << endl;
        cin >> opcao;
        cout << "___________________________________" << endl;
    }while(opcao != 0);

    return 0;
}
