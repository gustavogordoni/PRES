#include <iostream>
#include <locale>
#include <fstream>

using namespace std;

float calculoIMC (float, float);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qnt;

    cout << "Programa para calcular o IMC de uma pessoa: " << endl << endl;

    cout << "Quantos IMCs você vai calcular? ";
    cin >> qnt;

    struct Pessoa{
        string nome;
        float peso;
        float altura;

    } strPessoa[qnt];

    cin.ignore();

    for(int i = 0; i < qnt; i++){
        cin.ignore();
        cout << "\nPessoa 0" << i+1 << " =====================================\n";
        cout << "Informe o nome do cliente: ";
        getline(cin, strPessoa[i].nome);
        cout << "Informe o peso do cliente: ";
        cin >> strPessoa[i].peso;
        cout << "Informe a altura do cliente: ";
        cin >> strPessoa[i].altura;

        cout << "\nO IMC é: " << calculoIMC(strPessoa[i].peso, strPessoa[i].altura) << "\n\n";

        string linha;
        fstream arquivo ("arquivo.txt", ios::out | ios::app);

        if(arquivo.is_open() && !arquivo.fail()){
            arquivo << "O IMC do cliente " << strPessoa[i].nome << " é: " << calculoIMC(strPessoa[i].peso, strPessoa[i].altura) << endl;

            arquivo.close();
        }else{
            cout << "ERROR: arquivo não aberto." << endl;
        }
    }
    cout << "Clintes cadastrados com sucesso!";

    return 0;
}

float calculoIMC (float peso, float altura){
    return peso / (altura * altura);
}
