#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Informe a quantidade de LINHAS das matrizes: ";
    cin >> row;
    cout << "Informe a quantidade de COLUNAS das matrizes: ";
    cin >> col;

    float matriz1[row][col];
    float matriz2[row][col];
    float matrizSoma[row][col];

    cout << "\n\nPreenchendo a MATRIZ 1:" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "Informe o valor para [ " << i << ", " << j << " ]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "\n\nPreenchendo a MATRIZ 2:" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "Informe o valor para [ " << i << ", " << j << " ]: ";
            cin >> matriz2[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    cout << "\n\nMatriz SOMA:" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << matrizSoma[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
