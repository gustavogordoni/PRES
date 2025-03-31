#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float resultado = 0.12 * 2112;
    cout << "O resultado do cálculo de 12% de 2112 é: " << resultado << endl;

    return 0;
}
