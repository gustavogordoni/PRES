#include <iostream>
#include <locale>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string abc;

    ifstream arquivoLeitura ("arquivoLeitura.txt"); // Abre o arquivo apena para leitura.

    if(arquivoLeitura.is_open() && !arquivoLeitura.fail()){

        while(!arquivoLeitura.eof()){ // retorna true ao atingit o fim do arquivo
            getline(arquivoLeitura, abc);
            cout << abc << endl;
        }

        arquivoLeitura.close();

    }else{
        cout << "ERROR: Falha ao abrir o arquivo." << endl;
    }

    return 0;
}
