#include <iostream>
#define QNT 15
using namespace std;

int main()
{
    float vetor[QNT + 1] = {}, media = 0;
    int iguaisQuatro = 0, maioresMedia = 0;

    for(int i = 0; i < QNT; i++){
        cout << "Digite o " << i+1 << "° valor do vetor: ";
        cin >> vetor[i];
        media += vetor[i] / QNT;

        if(vetor[i] == 4){
            iguaisQuatro++;
        }
    }

    for(int i = 0; i < QNT; i++){
        if(vetor[i] > media){
            maioresMedia++;
        }
    }

    cout << "\n\nA média de todos os valores digitados foi: " << media;
    cout << "\nNo vetor existem: " << iguaisQuatro << " números iguais a 4.";
    cout << "\nNo vetor existem: " << maioresMedia << " números maiores que a média.\n\n";

    return 0;
}
