#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int value1, value2;
    cout << "Números contidos em um intervalo\n\n";
    cout << "Informe um número inicial: ";
    cin >> value1;
    cout << "Informe um número final: ";
    cin >> value2;

    if(value1 <= value2){
        while(value1 <= value2){
            cout << value1 << endl;
            value1++;
        }
    }else{
        while(value2 <= value1){
            cout << value2 << endl;
            value2++;
        }
    }

    cout << "\nFim da execução.";

    return 0;
}
