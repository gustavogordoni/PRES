#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor, porcentagem;
    cout << "Informe um valor qualquer: ";
    cin >> valor;
    porcentagem = valor * 0.12;
    cout << "O cálculo de 12% desse valor é: " << porcentagem;

    return 0;
}
