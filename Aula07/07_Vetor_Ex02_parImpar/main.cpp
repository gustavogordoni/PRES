#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tamanho = 15, i = 0, j = 0;
    int numero[tamanho];

    for(i = 0; i < tamanho; i++){
        cout << "Informe o número inteiro: ";
        cin >> numero[i];
    }

    for(j = 0; j < tamanho; j++){
        if(numero[j] % 2 == 0){
            cout << "\nO número " << numero[j] << " é PAR";
        }else{
            cout << "\nO número " << numero[j] << " é ÍMPAR";
        }
    }

    cout << endl;

    return 0;
}
