#include <iostream>
#include <locale>
#define QNT 8

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

     int value[QNT + 1] = {}, qnt = 0;

    for(int i = 1; i <= QNT; i++){
        cout << "Digite o "<< i <<"° valor: ";
        cin >> value[i];

        if(value[i] % 3 == 0){
            qnt++;
        }
    }

    cout << "Os valore digitados são: ";

    for(int i = 1; i <= QNT; i++){
        cout << value[i] << " - ";
    }

    cout << "\n\nForam digitados " << qnt << " números múltiplos de 3." << endl;

    return 0;
}
