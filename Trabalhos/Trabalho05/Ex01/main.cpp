#include <iostream>
#include <locale>

using namespace std;

/* 1) Escreva um programa em C++  que exiba a
    seguinte mensagem: “Sou calouro de BSI!!!!”
**/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout << "Sou calouro do BSI!!!" << endl;

    return 0;
}
