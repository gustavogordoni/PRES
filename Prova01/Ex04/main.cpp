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
    cout << "Digite o ano que você entrou no seu curso: ";
    cin >> anoEntrada;
    cout << "Digite o número do curso que você está matriculado: ";
    cout << "\n\n( 1 ) - Física";
    cout << "\n( 2 ) - BSI";
    cout << "\n( 3 ) - Engenharia\n";
    cin >> curso;

    if(curso == "1"){
        duracao = 3;
        anoSaida = anoEntrada + duracao;
        cout << "\n\nOi " << nome << ", você deve se formar em: "<< anoSaida << endl << endl;
    }else if(curso == "2"){
        duracao = 4;
        anoSaida = anoEntrada + duracao;
        cout << "\n\nOi " << nome << ", você deve se formar em: "<< anoSaida << endl << endl;
    }else if(curso == "3"){
        duracao = 5;
        anoSaida = anoEntrada + duracao;
        cout << "\n\nOi " << nome << ", você deve se formar em: "<< anoSaida << endl << endl;
    }else{
        cout << "Opção inválida";
    }

    return 0;
}
