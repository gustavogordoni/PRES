#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, nota4, media;

    cout << "Informe a primeira nota bimestral: ";
    cin >> nota1;
    cout << "Informe a segunda nota bimestral: ";
    cin >> nota2;
    cout << "Informe a terceira nota bimestral: ";
    cin >> nota3;
    cout << "Informe a quarta nota bimestral: ";
    cin >> nota4;

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    cout << "A média das suas notas é: " << media << endl;

    return 0;
}
