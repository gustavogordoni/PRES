#include <iostream>
#define QNT 5

using namespace std;

int main()
{
    float vetorA[QNT + 1] = {}, vetorB[QNT + 1] = {},vetorC[QNT + 1] = {};

    for(int i = 0; i < QNT; i++){
        cout << "Digite o valor da posição " << i+1 << " do vetor A: ";
        cin >> vetorA[i];

        cout << "Digite o valor da posição " << i+1 << " do vetor B: ";
        cin >> vetorB[i];

        cout << endl;

        vetorC[i] = vetorA[i] + vetorB[i];
    }

    cout << "A soma de cada posição do vetor pode ser visualizada abaixo: \n";
    for(int i = 0; i < QNT; i++){
        cout << vetorC[i] << "\t";
    }

    cout << endl;

    return 0;
}
