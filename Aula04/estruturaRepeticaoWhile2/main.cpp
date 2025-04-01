#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num = 50;

    while(num > 0){
        cout << "Número: " << num << endl;
        num--;
    }
    cout << endl;
    cout << "Acabou o laço de repetição!" << endl;
}
