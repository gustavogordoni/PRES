#include <iostream>

using namespace std;

int main()
{
    int linhas = 0, colunas = 0;

    cout << "Quantas linhas terá a Matriz: ";
    cin >> linhas;

    cout << "Quantas colunas terá a Matriz: ";
    cin >> colunas;

    float matriz[linhas][colunas], totalLinha[linhas], totalMatriz;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << "Digite o valor da posição: " << i+1 << ", " << j+1 << " da matriz: ";
            cin >> matriz[i][j];

            totalLinha[i] += matriz[i][j];
        }
        totalMatriz += totalLinha[i];
    }

    cout << "\nOS ELEMENTOS DA MATRIZ SÃO: \n";
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i = 0; i < linhas; i++){
        cout << "\nO total da linha " << i+1 << " é: " << totalLinha[i] << endl;
    }

    cout << "\nO total da matriz é: " << totalMatriz;

    cout << endl;

    return 0;
}
