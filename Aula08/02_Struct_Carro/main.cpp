#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n_carro;
    cout << "Informe a quantidade de carros que deseja cadastrar: ";
    cin >> n_carro;

    struct Carro{
        char marca[60];
        char modelo[50];
        char placa[7];
        int ano;
        char chassi[17];
        char cor[50];
    } strCarro[n_carro];

    int i;

    for(i = 0; i < n_carro; i++){
        cout << "\n\nCarro " << (i+1) << " -------------------------------------------------"<< endl;

        cin.ignore();
        cout << "Informe a marca: ";
        cin.getline(strCarro[i].marca, 60);

        cout << "Informe o modelo: ";
        cin.getline(strCarro[i].modelo, 50);

        cout << "Informe a placa: ";
        cin.getline(strCarro[i].placa, 7);

        cout << "Informe o ano de fabricação: ";
        cin >> strCarro[i].ano;
        cin.ignore();

        cout << "Informe o chassi: ";
        cin.getline(strCarro[i].chassi, 17);

        cout << "Informe a cor: ";
        cin.getline(strCarro[i].cor, 50);

        cout << endl;
    }

    cout << "\Carros cadastrados com sucesso!";

    for(i = 0; i < n_carro; i++){
        cout << "Carro " << (i+1) << " -------------------------------------------------"<< endl;
        cout << "Marca: " << strCarro[i].marca << endl;
        cout << "Modelo: " << strCarro[i].modelo << endl;
        cout << "Placa: " << strCarro[i].placa << endl;
        cout << "Ano: " << strCarro[i].ano << endl;
        cout << "Chassi: " << strCarro[i].chassi << endl;
        cout << "Cor: " << strCarro[i].cor << endl << endl;
    }

    return 0;
}
