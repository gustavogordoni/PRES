#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const int tamanho = 5;
    float notas[tamanho], media = 0.0;
    int i = 0, j;

    do{
        if(i >= tamanho){
            cout << "\n\nBuffer lotado." << endl;
            i++;
            break;
        }
        cout << "Digite a nota do aluno " << (i+1) << ": " << endl;
        cin >> notas[i];

    }while(notas[i++] >= 0);

    i--;
    for(j = 0; j < i; j++){
        media += notas[j];
    }

    cout << "\nMédia das notas: " << (media/i) << endl;

    return 0;
}
