#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float soma = 0.0;
    const int max = 10;
    int i;

    cout << setprecision(2);

    cout << "Programa para apresentar a média de 10 notas." << endl;

    for (i = 0; i < max; i++){
        cout << "Nota " << (i+1) << " : ";
        float nota;
        cin >> nota;
        soma += nota;
    }
    cout << setw(5) << "Média = " << (soma/max) << endl;
    return 0;
}
