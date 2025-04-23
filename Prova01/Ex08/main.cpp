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

    cout << "Digite seu salário: ";
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

    cout << "\nSeu salário antes do reajuste era de: R$" << salario;
    cout << "\nSeu salário foi aumentado em " << percentual << " porcento";
    cout << "\nSeu salário foi aumentado em R$" << aumento;
    cout << "\nSeu salário atual é de R$" << salarioAumento << endl;

    return 0;
}
