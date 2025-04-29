#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tamanho = 0, i = 0;
    cout << setprecision(2);

    cout << "Informe quantos produtos irá lançar: ";
    cin >> tamanho;

    float produto[tamanho], soma = 0.0;

    for(i = 0; i < tamanho; i++){
        cout << "\nDigite ao valor do produto " << (i+1) << ": " << endl;
        cin >> produto[i];
        soma += produto[i];
    }

    cout << "\nValor da compra: " << (soma) << endl;

    return 0;
}
