#include <iostream>
#include <locale>

using namespace std;

int fatorial (int);

int main()
{
    int value;

    cout << "Informe um número inteiro: ";
    cin>> value;

    cout << "Fatorial de "<< value << " é igual a: " << fatorial(value) << endl;
}

int fatorial(int num)
{
    if(num == 1){
        return 1;
    }
    else{
        return fatorial(num-1) * num;
    }
}
