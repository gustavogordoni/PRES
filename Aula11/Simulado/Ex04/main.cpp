#include <iostream>
#include <locale>
#include <cstring>
#include <fstream>

using namespace std;

float lucro (float, float, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n_produtos;
    cout << "Programa para cadastrar Produtos e calcular LUCRO." << endl << endl;
    cout << "Quantos produtos deseja cadastrar? ";
    cin >> n_produtos;

    struct Produto{
        int cod;
        float precoCusto;
        float precoVenda;
        int qntEstoque;

    } strProduto[n_produtos];

    fstream arquivo ("arquivo.txt", ios::out | ios::app);

    if(arquivo.is_open() && !arquivo.fail()){
        arquivo << "Programa para cadastrar Produtos e calcular LUCRO." << endl << endl;
        arquivo << "Quantos produtos deseja cadastrar? " << n_produtos << endl << endl;
    }

    cin.ignore();

    for(int i = 0; i < n_produtos; i++){
        cout << "\n\Produto 0" << (i+1) << " -------------------------------------------------"<< endl;

        cout << "Informe o código do produto: ";
        cin >> strProduto[i].cod;

        cout << "Informe o preço de custo do produto: ";
        cin >> strProduto[i].precoCusto;

        cout << "Informe o preço de venda do produto: ";
        cin >> strProduto[i].precoVenda;

        cout << "Informe a quantidade em estoque do produto: ";
        cin >> strProduto[i].qntEstoque;

        cout << "O produto: " << strProduto[i].cod << " pode gerar R$ " << lucro(strProduto[i].precoCusto, strProduto[i].precoVenda, strProduto[i].qntEstoque) << " de lucro.";

        cout << endl;
        cin.ignore();

        if(arquivo.is_open() && !arquivo.fail()){
            string linha;

            arquivo << "Informe o código do produto: ";
            arquivo << strProduto[i].cod << endl;

            arquivo << "Informe o preço de custo do produto: ";
            arquivo << strProduto[i].precoCusto << endl;

            arquivo << "Informe o preço de venda do produto: ";
            arquivo << strProduto[i].precoVenda << endl;

            arquivo << "Informe a quantidade em estoque do produto: ";
            arquivo << strProduto[i].qntEstoque << endl;

            arquivo << "O produto: " << strProduto[i].cod << " pode gerar R$ " << lucro(strProduto[i].precoCusto, strProduto[i].precoVenda, strProduto[i].qntEstoque) << " de lucro." << endl << endl;


        }else{
            cout << "ERROR: arquivo não aberto." << endl;
        }
    }

    arquivo.close();

    cout << "\nProdutos cadastrados com sucesso!" << endl;

    return 0;
}

float lucro (float custo, float venda, int estoque){
    float lucro = 0;

    lucro = (venda - custo) * estoque;

    return lucro;
}
