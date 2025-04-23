#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    float salario, percentual, aumento, salarioAumento;

    cout << "Digite seu sal�rio: ";
    cin >> salario;

    if(salario <= 1500){
        percentual = 20;
    }else if(salario > 1500 && salario <= 2000){
        percentual = 15;
    }else if(salario > 2000 && salario <= 3000){
        percentual = 10;
    }else if(salario > 3000){
        percentual = 5;
    }
    aumento = salario * (percentual/100);
    salarioAumento = salario + aumento;

    cout << "\nSeu sal�rio antes do reajuste era de: R$" << salario;
    cout << "\nSeu sal�rio foi aumentado em " << percentual << " porcento";
    cout << "\nSeu sal�rio foi aumentado em R$" << aumento;
    cout << "\nSeu sal�rio atual � de R$" << salarioAumento << endl;

    return 0;
}
