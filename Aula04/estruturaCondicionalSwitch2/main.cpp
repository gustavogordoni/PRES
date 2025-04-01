#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char bolo;

    cout << "Escolha uma opção do cardápio para ver o valor:" << endl;
    cout << "Digite - C - escolher o bolo de Chocolate" << endl;
    cout << "Digite - B - escolher o bolo de Banana" << endl;
    cout << "Digite - A - escolher o bolo de Amendoim" << endl;
    cout << "Digite - L - escolher o bolo de Limão" << endl;
    cout << "Digite - F - escolher o bolo de Fubá" << endl;
    cin >> bolo;
    cout << endl;

    switch(bolo){
        case 'C':
            cout << "O bolo de Chocolate custa R$14\n";
        break;
        case 'B':
            cout << "O bolo de Banana custa R$17\n";
        break;
        case 'A':
            cout << "O bolo de Amendoim custa R$13\n";
        break;
        case 'L':
            cout << "O bolo de Limão custa R$15\n";
        break;
        case 'F':
            cout << "O bolo de Fubá custa R$12\n";
        break;
        default:
            cout << "Opção inválida!\n";
    }

    return 0;
}
