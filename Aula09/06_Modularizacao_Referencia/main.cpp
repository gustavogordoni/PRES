#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

/*  Função troca(int &x, int &y)
*   Ação: troca os valores inteiros apontados por x e y
*   Entrada: apontadores x e y
*   Saída: valor de x e y trocados na origem da chamada da função
*   Suposições: x e y são apontadores válidos
*   Algoritmo: Primeiro guarda o primeiro valor em um temporário e troca
*/

void troca(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    cout << "Informe dois números inteiros: ";
    cin >> a >> b;
    cout << "\nVocê entrou com: " << a << " E " << b;

    troca(a, b);
    cout << "\nTrocados, eles são: " << a << " E " << b << endl;

    return 0;
}
