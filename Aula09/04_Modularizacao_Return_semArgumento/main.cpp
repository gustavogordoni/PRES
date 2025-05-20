#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int obterValor(){
    int valor;
    cout << "Informe um valor inteiro: ";
    cin >> valor;
    return valor;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    a = obterValor();
    b = obterValor();
    cout << "Soma dos valores: " << (a+b) << endl;

    return 0;
}
