#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n_participantes = 0;

    cout << "Programa para cadastrar Participantes em Campeonato de Taekwondo.\n";
    cout << "Quantos participantes você cadastrar? ";
    cin >> n_participantes;

    cout << endl;

    struct Participante{
        string nome;
        float peso;
        int idade;
        string faixa;
        string sexo;
    }strParticipante[n_participantes];

    fstream arquivo ("participantes.txt", ios::out | ios::app);

    if(arquivo.is_open() && !arquivo.fail()){
        for(int i = 0; i < n_participantes; i++){
            cout << "INFORME O NOME DO COMPETIDOR: ";
            cin >> strParticipante[i].nome;
            arquivo << strParticipante[i].nome << endl;

            cout << "INFORME O PESO DO COMPETIDOR: ";
            cin >> strParticipante[i].peso;
            arquivo << strParticipante[i].peso << endl;

            cout << "INFORME A IDADE DO COMPETIDOR: ";
            cin >> strParticipante[i].idade;
            arquivo << strParticipante[i].idade << endl;

            cout << "INFORME A FAIXA DO COMPETIDOR: ";
            cin >> strParticipante[i].faixa;
            arquivo << strParticipante[i].faixa << endl;

            cout << "INFORME O SEXO DO COMPETIDOR: ";
            cin >> strParticipante[i].sexo;
            arquivo << strParticipante[i].sexo << endl;

            cout << endl;
            arquivo << "---------------------------------------------------------------------------------\n";
        }
    }else{
        cout << "Erro ao manipular o arquivo.";
    }



    return 0;
}
