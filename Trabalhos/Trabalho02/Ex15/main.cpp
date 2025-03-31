#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num;

    cout << "Informe um valor qualquer (positivo/negativo): ";
    cin >> num;

    if(num > 0){
        cout << "O valor " << num << " é POSITIVO." << endl;

    }else{
        if(num < 0){
            cout << "O valor " << num << " é NEGATIVO." << endl;
        }else{
            cout << "O valor " << num << " é NEUTRO." << endl;
        }
    }

    return 0;
}
