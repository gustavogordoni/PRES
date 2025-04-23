#include <iostream>
#include <locale>
#include <cstring>

#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    const int qntValues = 50;
    int i;
    float greaterValue, lowestValue;

    cout << "Programa que lê " << qntValues <<" valores e encontra o maior e menor deles.\n\n";

    for (i = 1; i <= qntValues; i++){
        float value;
        cout << "Informe o " << i << "° valor: ";
        cin >> value;

        if(value > greaterValue){
            greaterValue = value;
        }
        if(value < lowestValue){
            lowestValue = value;
        }
    }

    cout << "\n\nO maior valor informado é: " << greaterValue << endl;
    cout << "O menor valor informado é: " << lowestValue << endl;

    return 0;
}
