#include <iostream>
#include <locale>
#include <cstring>

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

    cout << "\Clientes cadastrados com sucesso!";
    cin.ignore();

    for(int i = 0; i < n_animais; i++){
        cout << "\n\nAnimal 0" << (i+1) << " -------------------------------------------------"<< endl;
        cout << "Nome: " << strAnimal[i].nome << endl;
        cout << "Espécie: " << strAnimal[i].especie << endl;
        cout << "Raça: " << strAnimal[i].raca << endl;
        cout << "Sexo: " << strAnimal[i].sexo << endl;
        cout << "Idade: " << strAnimal[i].idade << endl;
        cout << "Nome do Dono: " << strAnimal[i].nomeDono << endl;
        cout << "RG do Dono: " << strAnimal[i].rgDono << endl;
        cout << "Telefone: " << strAnimal[i].telefoneDono << endl << endl;
    }

    return 0;
}
