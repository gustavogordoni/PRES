#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

/*
14)     14. A prefeitura de uma cidade fez uma
pesquisa entre 15 habitantes, coletando dados sobre o salário e
número de filhos. A prefeitura deseja saber:
    • média do salário da população;
    • média do número de filhos;
    • maior salário; .
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const int qntInhabitants = 15;
    int i = 0;
    float sumSalarys = 0, highSalary = 0, qntChildren = 0;

    for(i = 0; i < qntInhabitants; i++){
        float salary = 0;
        int children = 0;

        cout << "--------------------------------------\n";
        cout << "HABITANTE N° " << (i+1) << endl;
        cout << "--------------------------------------\n";
        cout << "Informe o valor de seu salário: ";
        cin >> salary;
        cout << "Informe a quantidade de filhos que possui: ";
        cin >> children;
        cout << "--------------------------------------\n\n\n";

        sumSalarys += salary;
        qntChildren += children;

        if(salary > highSalary){
            highSalary = salary;
        }
    }

    cout << fixed << setprecision(2);

    cout << "\n\nA média do salário da população é: R$" << (sumSalarys / qntInhabitants) << endl;
    cout << "A média do número de filhos é: " << (qntChildren / qntInhabitants) << endl;
    cout << "O maior salário é: R$" << highSalary << endl;


    return 0;
}
