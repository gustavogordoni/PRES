#include <iostream>
#include <locale>
#include<fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // ofstream arquivo ("Arquivo.txt"); --> mesmo que o das duas linhas abaixo.
    ofstream arquivo; // arquivo apenas para saída de dados
    arquivo.open("Arquivo.txt"); // abre o arquivo. Caso não exista, ele é criado.

    if(arquivo.is_open() // testa se o arquivo está realmente aberto.
        && !arquivo.fail()
    ){
        arquivo << "Gabriel" << endl;
        arquivo << "Jessé" << endl;
        arquivo.close();

        cout << "INFO: Dados gravados com sucesso!" << endl;
    }else{
        cout << "ERRO: arquivo não aberto." << endl;
    }

    return 0;
}
