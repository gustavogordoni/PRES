#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num, antecessorLimite;
    int index;

    cout << "Informe um número inteiro: ";
    cin >> num;

    antecessorLimite = num - 10;

    do{
        num--;
        cout << num << endl;

    }while(num > antecessorLimite);

    return 0;
}
