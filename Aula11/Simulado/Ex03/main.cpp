#include <iostream>

using namespace std;

int main()
{
    int tamanho = 0;
    cout << "Defina o tamanho da matriz quadrada: ";
    cin >> tamanho;

    float matriz[tamanho][tamanho];

    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            cout << "Digite um valor para a posição [" << i+1 << ", " << j+1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << endl;

    cout << "Os valores da matriz são: \n";
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nOs valores da matriz sem a primeira linha e sem a primeira coluna são: \n";
    for(int i = 1; i < tamanho; i++){
        for(int j = 1; j < tamanho; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
