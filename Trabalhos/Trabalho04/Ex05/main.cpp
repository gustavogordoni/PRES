#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int value1, value2;
    cout << "N�meros contidos em um intervalo\n\n";
    cout << "Informe um n�mero inicial: ";
    cin >> value1;
    cout << "Informe um n�mero final: ";
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

    cout << "\nFim da execu��o.";

    return 0;
}
