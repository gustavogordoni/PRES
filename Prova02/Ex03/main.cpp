#include <iostream>

using namespace std;

float calculoArea(float, float);

int main()
{
    float areaTotal = 0;
    int numComodos = 0;
    cout << "Quantos c�modo t�m o im�vel? ";
    cin >> numComodos;

    for(int i = 0; i < numComodos; i++){
        float largura = 0, comprimento = 0;

        cout << "\nDigite a largura do c�modo " << i+1<< ": ";
        cin >> largura;
        cout << "Digite o comprimento do c�modo " << i+1<< ": ";
        cin >> comprimento;

        cout << "O c�modo " << i+1 << " possui " << calculoArea(largura, comprimento) << " metros de constru��o.";
        areaTotal += calculoArea(largura, comprimento);

        cout << endl << endl;
    }

    cout << "\nO im�vel possui ao menos: " << areaTotal << endl << endl;
    return 0;
}

float calculoArea(float largura, float comprimento){
    return largura * comprimento;
}
