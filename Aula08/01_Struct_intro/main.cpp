#include <iostream>
#include <locale>
#include <cstring>

#define NALUNO 3

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct EstruturaAluno{
        char nome[60];
        char matricula[10];
        int anoIngresso;
    } strAluno[NALUNO];

    int i;

    for(i = 0; i < NALUNO; i++){
        cout << "Aluno " << (i+1) << " -------------------------------------------------"<< endl;
        cout << "Informe nome: ";
        cin.getline(strAluno[i].nome, 60);
        cout << "Informe matricula: ";
        cin.getline(strAluno[i].matricula, 10);
        cout << "Informe ano de ingresso: ";
        cin >> strAluno[i].anoIngresso;

        cout << endl;
        cin.ignore();
    }

    cout << "\nAlunos cadastrados com sucesso";

    for(i = 0; i < NALUNO; i++){
        cout << "Aluno " << (i+1) << " -------------------------------------------------"<< endl;
        cout << "Nome: " << strAluno[i].nome << endl;
        cout << "Matricula: " << strAluno[i].matricula << endl;
        cout << "Ano de Ingresoo: " << strAluno[i].anoIngresso << endl << endl;
    }

    return 0;
}
