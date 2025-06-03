#include <iostream>
#include <locale>
#define QNT 3

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor1[QNT + 1] = {}, vetor2[QNT + 1] = {}, vetorResultante[(QNT * 2) + 1] = {};

    for(int i = 1; i <= QNT; i++){
        cout << "Digite o "<< i <<"° valor do PRIMEIRO vetor: ";
        cin >> vetor1[i];
    }

    for(int i = 1; i <= QNT; i++){
        cout << "Digite o "<< i <<"° valor do SEGUNDO vetor: ";
        cin >> vetor2[i];
    }

    for(int i = 1, j = 1; i <= QNT; i++, j+=2){
        vetorResultante[j] = vetor1[i];
        vetorResultante[j+1] = vetor2[i];
    }

    cout << "Os valore digitados são: ";

    for(int i = 1; i <= QNT * 2; i++){
        cout << vetorResultante[i] << " - ";
    }

    return 0;
}
