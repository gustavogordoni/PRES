#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

/*  Fun��o troca(int &x, int &y)
*   A��o: troca os valores inteiros apontados por x e y
*   Entrada: apontadores x e y
*   Sa�da: valor de x e y trocados na origem da chamada da fun��o
*   Suposi��es: x e y s�o apontadores v�lidos
*   Algoritmo: Primeiro guarda o primeiro valor em um tempor�rio e troca
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

    cout << "Informe dois n�meros inteiros: ";
    cin >> a >> b;
    cout << "\nVoc� entrou com: " << a << " E " << b;

    troca(a, b);
    cout << "\nTrocados, eles s�o: " << a << " E " << b << endl;

    return 0;
}
