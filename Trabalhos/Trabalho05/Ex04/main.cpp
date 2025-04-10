#include <iostream>
#include <locale>

using namespace std;

/*
    4. Construa um programa em C++ que receba o nome e o valor de um produto, calcule o valor do produto após um desconto de 13%. Apresente o resultado como o abaixo:
        Produto: <nome do produto>
        Valor: <valor original do produto>
        Desconto: <valor do desconto>
        Valor Final: <valor do produto após o desconto>
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");


    const float discount = 0.13;
    float valueProduct, valueDiscount, valueDiscounted;
    string nameProduct;

    cout << "Informe o nome de um produto: ";
    cin >> nameProduct;
    cout << "Informe o valor de um produto: ";
    cin >> valueProduct;

    valueDiscount = valueProduct * discount;
    valueDiscounted = valueProduct - valueDiscount;

    cout << "\nProduto: " << nameProduct << endl;
    cout << "Valor: R$" << valueProduct << endl;
    cout << "Desconto: R$" << valueDiscount << endl;
    cout << "Valor Final: R$" << valueDiscounted << endl;

    return 0;
}
