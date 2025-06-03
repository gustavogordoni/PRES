#include <iostream>
#include <locale>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string linha, nome;

    fstream arquivo ("nomes.txt", ios::out | ios::app);

    if(arquivo.is_open() && !arquivo.fail()){
        cout << "Informe seu nome: ";
        getline(cin, nome);

        arquivo << nome << endl;

        arquivo.close();

        arquivo.open("nomes.txt");

        cout << "\nNomes arquivados: \n";
        while(!arquivo.eof()){
            getline(arquivo, linha);
            cout << linha << endl;
        }

        arquivo.close();

    }else{
        cout << "ERROR: arquivo não aberto." << endl;
    }

    return 0;
}
