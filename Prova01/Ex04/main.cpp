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
    int anoEntrada, anoSaida, duracao;
    string curso;

    cout << "Digite o seu nome: ";
    cin >> nome;
    cout << "Digite o ano que voc� entrou no seu curso: ";
    cin >> anoEntrada;
    cout << "Digite o n�mero do curso que voc� est� matriculado: ";
    cout << "\n\n( 1 ) - F�sica";
    cout << "\n( 2 ) - BSI";
    cout << "\n( 3 ) - Engenharia\n";
    cin >> curso;

    if(curso == "1"){
        duracao = 3;
        anoSaida = anoEntrada + duracao;
        cout << "\n\nOi " << nome << ", voc� deve se formar em: "<< anoSaida << endl << endl;
    }else if(curso == "2"){
        duracao = 4;
        anoSaida = anoEntrada + duracao;
        cout << "\n\nOi " << nome << ", voc� deve se formar em: "<< anoSaida << endl << endl;
    }else if(curso == "3"){
        duracao = 5;
        anoSaida = anoEntrada + duracao;
        cout << "\n\nOi " << nome << ", voc� deve se formar em: "<< anoSaida << endl << endl;
    }else{
        cout << "Op��o inv�lida";
    }

    return 0;
}
