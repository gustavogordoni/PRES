#include <iostream>
#include <locale>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    ofstream arquivo ("Nomes.txt", ios::app);
    // Abre o arquivo no final (depois do último caractere).

    if(arquivo.is_open()
        && !arquivo.fail()
    ){
        for(int i = 1; i <= 10; i++){
            string nome;

            cout << "Informe algum nome: ";
            getline(cin, nome);

            arquivo << nome << endl;
        }

        arquivo.close();

        cout << "INFO: Os nomes foram gravados com sucesso!" << endl;
    }else{
        cout << "ERROR: arquivo não aberto." << endl;
    }

    return 0;
}
