#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    cout << "PES - Programação Estruturada - Turma A\n\n";
    cout << "Prova Bimestral.\n\n";
    cout << "Valor - 4.0 pontos\n\n";
    cout << "Aluno: Gustavo Luiz Gordoni\n";
    cout << "Matricula: VP3031632\n\n";

    return 0;
}
