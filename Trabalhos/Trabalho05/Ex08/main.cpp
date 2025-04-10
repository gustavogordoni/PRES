#include <iostream>
#include <locale>

using namespace std;

/*
8. Tendo como dados de entrada a altura e o sexo de uma pessoa
(M para masculino e F para feminino), construa um programa que
calcule o peso ideal de uma pessoa, utilizando as seguintes fórmulas:
- para pessoa do sexo masculino: peso Ideal =  (72.7*h)-58
- para pessoa do sexo feminino: peso Ideal =: (62.1*h)-44.7
Exiba as informações incluindo o peso ideal.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float height, idealWeight;
    string sex;

    cout << "Informe sua altura (em metros) ";
    cin >> height;
    cout << "Informe seu sexo (M - Masculino | F - Feminino): ";
    cin >> sex;

    if(sex == "M" || sex == "m"){
        idealWeight = (72.7 * height) - 58;
        cout << "Seu peso ideal seria de: " << idealWeight << "Kg." << endl;
    }else if(sex == "F" || sex == "f"){
        idealWeight = (62.1 * height) - 44.7;
        cout << "Seu peso ideal seria de: " << idealWeight << "Kg." << endl;
    }else{
        cout << "Opção inválida!";
    }

    return 0;
}
