#include <iostream>
#include <locale>
#define QNT 10

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

     int vetor1[QNT + 1] = {}, vetor2[QNT + 1] = {}, qnt = 0;

    for(int i = 1; i <= QNT; i++){
        cout << "Digite o "<< i <<"° valor do VETOR 1: ";
        cin >> vetor1[i];
    }

    cout << endl;

    for(int i = 1; i <= QNT; i++){
        cout << "Digite o "<< i <<"° valor do VETOR 2: ";
        cin >> vetor2[i];
    }

    cout << "\nOs valores digitados do VETOR 1 são: ";

    for(int i = 1; i <= QNT; i++){
        cout << vetor1[i] << " - ";
    }

    cout << "\nOs valores digitados do VETOR 2 são: ";

    for(int i = 1; i <= QNT; i++){
        cout << vetor2[i] << " - ";
    }

    cout << "\n\nOs valore dos vetores dos multiplicados são: ";


    for(int i = 1; i <= QNT; i++){
        cout << vetor1[i] * vetor2[i] << " - ";
    }

    cout << endl;

    return 0;
}
