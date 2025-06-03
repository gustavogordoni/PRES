#include <iostream>
#define ROW 4
#define COL 5

using namespace std;

int main()
{
    float matriz[ROW][COL];
    float metadeMatriz[ROW][COL];
    int row = ROW, col = COL;

    cout << "\n\nPreenchendo a MATRIZ:" << endl;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "Digite um valor para a posição [ " << i+1 << ", " << j+1 << " ] da matriz: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\n\nOs valores da matriz são:" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << matriz[i][j] << "\t";
            metadeMatriz[i][j] = matriz[i][j] / 2;
        }
        cout << endl;
    }

    cout << "\nA matriz com os valores resultantes:" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << metadeMatriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
