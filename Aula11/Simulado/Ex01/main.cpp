#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qntProdutos = 0;
    float soma = 0;

    cout << "Quantos produtos você vai lançar? ";
    cin >> qntProdutos;

    for(int i = 0; i < qntProdutos; i++){
        float value = 0;

        cout << "Digitre o preço do produto " << i+1 << ": ";
        cin >> value;
        soma += value;
    }

    cout << "\nO preço total da compra foi: " << soma << endl;

    return 0;
}
