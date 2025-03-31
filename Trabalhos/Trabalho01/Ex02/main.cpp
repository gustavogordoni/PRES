#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, media;
    string aluno;

    cout << "Informe o nome do aluno: ";
    cin >> aluno;
    cout << "Informe a primeira nota: ";
    cin >> nota1;
    cout << "Informe a segunda nota: ";
    cin >> nota2;
    cout << "Informe a terceira nota: ";
    cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3;
    cout << "\nO aluno " << aluno << " possui a média " << media;

    return 0;
}
