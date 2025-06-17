#include <iostream>

using namespace std;

float calculoArea(float, float);

int main()
{
    float areaTotal = 0;
    int numComodos = 0;
    cout << "Quantos cômodo têm o imóvel? ";
    cin >> numComodos;

    for(int i = 0; i < numComodos; i++){
        float largura = 0, comprimento = 0;

        cout << "\nDigite a largura do cômodo " << i+1<< ": ";
        cin >> largura;
        cout << "Digite o comprimento do cômodo " << i+1<< ": ";
        cin >> comprimento;

        cout << "O cômodo " << i+1 << " possui " << calculoArea(largura, comprimento) << " metros de construção.";
        areaTotal += calculoArea(largura, comprimento);

        cout << endl << endl;
    }

    cout << "\nO imóvel possui ao menos: " << areaTotal << endl << endl;
    return 0;
}

float calculoArea(float largura, float comprimento){
    return largura * comprimento;
}
