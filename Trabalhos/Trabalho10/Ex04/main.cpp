#include <iostream>
#include <locale>
#define QNT 15

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

     float p1[QNT + 1] = {}, p2[QNT + 1] = {}, media[QNT + 1] = {};

    for(int i = 1; i <= QNT; i++){
        cout << "Digite a nota de P1 do aluno " << i <<": ";
        cin >> p1[i];

        cout << "Digite a nota de P2 do aluno " << i <<": ";
        cin >> p2[i];

        media[i] = (p1[i] + p2[i]) / 2;

        cout << endl;
    }

    cout << "Situação dos alunos: \n";

    for(int i = 1; i <= QNT; i++){
        cout << "Aluno " << i << ": P1: " << p1[i] << " | P2: " << p2[i] << endl;
        cout << "Média: " << media[i] << endl;
        cout << "Status: ";

        if(media[i] >= 6){
            cout << "APROVADO\n\n";
        }else{
            cout << "REPROVADO\n\n";
        }
    }

    return 0;
}
