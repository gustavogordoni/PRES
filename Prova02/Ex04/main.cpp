#include <iostream>

using namespace std;

int main()
{
    int linhas = 0, colunas = 0;

    cout << "Quantas linhas ter� a Matriz: ";
    cin >> linhas;

    cout << "Quantas colunas ter� a Matriz: ";
    cin >> colunas;

    float matriz[linhas][colunas], totalLinha[linhas], totalMatriz;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << "Digite o valor da posi��o: " << i+1 << ", " << j+1 << " da matriz: ";
            cin >> matriz[i][j];

            totalLinha[i] += matriz[i][j];
        }
        totalMatriz += totalLinha[i];
    }

    cout << "\nOS ELEMENTOS DA MATRIZ S�O: \n";
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i = 0; i < linhas; i++){
        cout << "\nO total da linha " << i+1 << " �: " << totalLinha[i] << endl;
    }

    cout << "\nO total da matriz �: " << totalMatriz;

    cout << endl;

    return 0;
}
