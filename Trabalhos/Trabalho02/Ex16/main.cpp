#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, media;

    cout << "Informe o valor da primeira nota: ";
    cin >> nota1;
    cout << "Informe o valor da segunda nota: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2;

    if(media >= 7){
        if(media == 10){
            cout << "Aprovado com Distinção!" << endl;
        }else{
            cout << "Aprovado!" << endl;
        }
    }else{
        cout << "Reprovado!" << endl;
    }
    return 0;
}
