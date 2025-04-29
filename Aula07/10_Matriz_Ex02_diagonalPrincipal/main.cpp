#include <iostream>

using namespace std;

int main()
{
    int tamanho;

    cout << "Qual o tamanho da matriz quadrada: ";
    cin >> tamanho;

    float matriz[tamanho][tamanho];
    int i, j;

    // Preenchimento de matriz
    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            cout << "Digite o valor para preencher a matriz [" << i << ", " << j << "]: " << endl;
            cin >> matriz[i][j];
        }
    }

    cout << endl;

    // mostrando os valores na tela
    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            if(i == j){
                cout << matriz[i][j] << "\t";
            }else{
                cout << "x" << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}
