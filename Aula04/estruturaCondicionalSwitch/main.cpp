#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opc;
    cout << "Digite 1 para Prato do dia! \n";
    cout << "Digite 2 para Lasanha! \n";
    cout << "Digite 3 para Picanha Grelhada! \n";
    cout << "Digite 4 para Salada simples! \n";
    cin >> opc;
    cout << endl;

    switch(opc){
        case 1:
            cout << "Prato do dia: R$ 17\n";
        break;
        case 2:
            cout << "Lasanha: R$ 17\n";
        break;
        case 3:
            cout << "Picanha Grelhada: R$ 21.90\n";
        break;
        case 4:
            cout << "Salada simples: R$ 7.90\n";
        break;
        default:
            cout << "Opção inválida!\n";

    }

    return 0;
}
