#include <iostream>
#include <locale>

using namespace std;

int menorNumero(int, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numberA, numberB;

    cout << "Informe o primeiro número inteiro: ";
    cin >> numberA;
    cout << "Informe o segundo número inteiro: ";
    cin >> numberB;

    cout << "O menor número informado é: " << menorNumero(numberA, numberB) << endl << endl;

    return 0;
}

int menorNumero(int x, int y){
    if(x < y){
        return x;
    }else{
        return y;
    }
}
