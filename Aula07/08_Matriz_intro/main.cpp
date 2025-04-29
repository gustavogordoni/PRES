#include <iostream>

using namespace std;

int main()
{
    int matriz[2][3];
    int i, j;

    // Preenchimento de matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            cout << "Digite o valor para preencher a matriz [" << i+1 << ", " << j+1 << "]: " << endl;
            cin >> matriz[i][j];
        }
    }

    cout << endl;

    // mostrando os valores na tela
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
