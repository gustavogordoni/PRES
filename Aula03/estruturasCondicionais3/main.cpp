#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float media;

    cout << "Informe a m�dia do aluno: ";
    cin >> media;

    if(media >= 0 && media <= 10){
        cout << "A média é valida" << endl;
        if(media >= 6){
            cout << "Aluno aprovado com média "<< media << endl;
        }else{
            cout << "Aluno reprovado com média "<< media << endl;
        }
    }else{
        cout << "A média é inválida!";
    }

    return 0;
}
