#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    string nome;
    int mes;
    string mesString;

    cout << "Digite o seu nome: ";
    cin >> nome;
    cout << "Digite o número do mês do seu aniversário: ";
    cin >> mes;

    switch(mes){
        case 1:
            mesString = "Janeiro";
        break;
        case 2:
            mesString = "Fevereiro";
        break;
        case 3:
            mesString = "Março";
        break;
        case 4:
            mesString = "Abril";
        break;
        case 5:
            mesString = "Maio";
        break;
        case 6:
            mesString = "Junho";
        break;
        case 7:
            mesString = "Julho";
        break;
        case 8:
            mesString = "Agosto";
        break;
        case 9:
            mesString = "Setembro";
        break;
        case 10:
            mesString = "Outubro";
        break;
        case 11:
            mesString = "Novembro";
        break;
        case 12:
            mesString = "Dezembro";
        break;
        default:
            cout << "Mês inválido!\n";
    }

    cout << "\n\nOi " << nome << ", você nasceu em " << mesString << endl << endl;

    return 0;
}
