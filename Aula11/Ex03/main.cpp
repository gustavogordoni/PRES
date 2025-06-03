#include <iostream>
#include <locale>
#define QNT 5

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[QNT + 1] = {};

    for(int i = 0; i < QNT; i++){
        cout << "Digite o "<< i+1 <<"° valor real do vetor: ";
        cin >> vetor[i];
    }

    cout << "Os valores digitados, em ordem inversa, são: ";

    for(int i = 1; i <= QNT; i++){
        cout << vetor[QNT - i] << " - ";
    }

    cout << endl << endl;

    return 0;
}
