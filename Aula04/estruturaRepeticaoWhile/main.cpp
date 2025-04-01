#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int contador = 0;

    while(contador < 5){
        cout << "Contador = " << contador << endl;
        contador++;
    }
    cout << "Acabou o laço de repetição!" << endl;

    cout << endl;

    int i = 1;

    while(i <= 10){
        cout << "Número = " << i << endl;
        i++;
    }


    return 0;
}
