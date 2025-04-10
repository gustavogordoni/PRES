#include <iostream>
#include <locale>

using namespace std;

/*
10. Escrever um programa que lê o número de identificação de um
aluno (matrícula), 3 notas (0 até 10) obtidas nas atividades da
disciplina. Calcular a média de aproveitamento, usando a fórmula:

A atribuição de conceitos obedece a tabela abaixo:
MA = (N1 + N2 * 2 + N3 * 3) / 6

Média: 9,0              | Conceito: A
Média: 7,5 e < 9,0      | Conceito: B
Média: 4,0 e < 6,0      | Conceito: C
Média: < 4,0            | Conceito: D

O programa deve escrever o número do aluno (matrícula), suas
notas, a média de aproveitamento e o conceito correspondente.
De acordo com o conceito exiba a mensagem: APROVADO se o conceito for
A,B ou C e REPROVADO se o conceito for D ou E.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float grade01, grade02, grade03, weightedAverage;
    string id, concept ;

    cout << "Informe o número de identificação: ";
    cin >> id;
    cout << "Informe o valor da primeira nota: ";
    cin >> grade01;
    cout << "Informe o valor da segunda nota: ";
    cin >> grade02;
    cout << "Informe o valor da terceira nota: ";
    cin >> grade03;

    weightedAverage = (grade01 + (grade02 * 2) + (grade03 * 3)) / 6;

    if(weightedAverage >= 9){
        concept = "A";
    }else if(weightedAverage < 9 && weightedAverage >= 7.5){
        concept = "B";
    }else if(weightedAverage < 7.5 && weightedAverage >= 6){
        concept = "C";
    }else if(weightedAverage < 6 && weightedAverage >= 4){
        concept = "D";
    }else{
        concept = "E";
    }

    cout << "\n\n- Matrícula do aluno: " << id << endl << endl;
    cout << "- Nota 01: " << grade01 << endl << endl;
    cout << "- Nota 02: " << grade02 << endl << endl;
    cout << "- Nota 03: " << grade03 << endl << endl;
    cout << "- Média ponderada das notas: " << weightedAverage << endl << endl;
    cout << "- Conceito: " << concept << endl << endl;

    if(concept == "A" || concept == "B" || concept == "C"){
        cout << "- Definição: APROVADO!" << endl << endl;
    }else{
        cout << "Definição: REPROVADO!" << endl << endl;
    }

    return 0;
}
