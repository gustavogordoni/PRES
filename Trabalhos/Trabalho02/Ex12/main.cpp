#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float area, litros, qntLata, valorGasto;

    cout << "Informe o tamanho da área a ser pintada (em metros quadrados): ";
    cin >> area;

    litros = area / 3;
    qntLata = litros / 18;
    valorGasto = qntLata * 80;

    cout << "Quantidade de latas compradas: " << qntLata << endl;
    cout << "Preço total: R$" << valorGasto << endl;

    return 0;
}
