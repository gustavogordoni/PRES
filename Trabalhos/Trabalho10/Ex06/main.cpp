#include <iostream>
#define QNT 4

using namespace std;

int main()
{
    float matriz[QNT][QNT];
    int row = QNT, col = QNT;

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
        }
        cout << endl;
    }

    return 0;
}
