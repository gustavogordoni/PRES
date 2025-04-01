#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num = 0, resto;

    while(num <= 100){
        resto = num % 10;

        if(resto == 0){
            cout << "O número " << num << " sé divisível por 10" << endl;
        }
        num++;
    }

    cout << endl;
    cout << "Acabou o laço de repetição!" << endl;
}
