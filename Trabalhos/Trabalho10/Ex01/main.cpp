#include <iostream>
#include <locale>
#define QNT 10

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

     int value[QNT + 1] = {}, sum = 0;

    for(int i = 1; i <= QNT; i++){
        cout << "Digite o "<< i <<"° valor: ";
        cin >> value[i];

        sum += value[i];
    }

    cout << "Os valore digitados são: ";

    for(int i = 1; i <= QNT; i++){
        cout << value[i] << " - ";
    }

    cout << "\n\nA soma dos valores é: " << sum << endl;

    return 0;
}
