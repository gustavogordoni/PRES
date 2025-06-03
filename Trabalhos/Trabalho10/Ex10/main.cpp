#include <iostream>
#include <locale>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n_animais;
    cout << "Quantos animais deseja cadastrar: ";
    cin >> n_animais;

    struct Animal{
        string nome;
        string especie;
        string raca;
        char sexo[2];
        int idade;
        string nomeDono;
        string rgDono;
        string telefoneDono;

    } strAnimal[n_animais];

    cin.ignore();

    for(int i = 0; i < n_animais; i++){
        cout << "\n\nAnimal 0" << (i+1) << " -------------------------------------------------"<< endl;

        cout << "Informe o nome do pet: ";
        getline(cin, strAnimal[i].nome);

        cout << "Informe a espécie do pet: ";
        getline(cin, strAnimal[i].especie);

        cout << "Informe a raça do pet: ";
        getline(cin, strAnimal[i].raca);

        cout << "Informe o sexo do pet [M - masculino; F - feminino]: ";
        cin.getline(strAnimal[i].sexo, 2);

        cout << "Informe a idade do pet: ";
        cin >> strAnimal[i].idade;

        cout << "Informe o nome do dono do pet: ";
        cin.ignore();
        getline(cin, strAnimal[i].nomeDono);

        cout << "Informe o RG do dono do pet: ";
        getline(cin, strAnimal[i].rgDono);

        cout << "Informe o telefone do dono do pet: ";
        getline(cin, strAnimal[i].telefoneDono);

        cout << endl;
        cin.ignore();
    }

    for(int i = 0; i < n_animais; i++){
        string linha;

        fstream arquivo ("arquivo.txt", ios::out | ios::app);

        if(arquivo.is_open() && !arquivo.fail()){
            arquivo << "Nome: " << strAnimal[i].nome << endl;
            arquivo << "Espécie: " << strAnimal[i].especie << endl;
            arquivo << "Raça: " << strAnimal[i].raca << endl;
            arquivo << "Sexo: " << strAnimal[i].sexo << endl;
            arquivo << "Idade: " << strAnimal[i].idade << endl;
            arquivo << "Nome do Dono: " << strAnimal[i].nomeDono << endl;
            arquivo << "RG do Dono: " << strAnimal[i].rgDono << endl;
            arquivo << "Telefone: " << strAnimal[i].telefoneDono << endl << endl;

            arquivo.close();
        }else{
            cout << "ERROR: arquivo não aberto." << endl;
        }

    }

    cout << "Clintes cadastrados com sucesso!";

    return 0;
}
