#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float peso, multa;

    cout << "Informe o peso de peixes: ";
    cin >> peso;

    if(peso > 50){
        multa = (peso - 50) * 4;
        cout << "Peso excedente: " << peso - 50 << "Kg" << endl;
        cout << "Você deverá pagar R$" << multa << " de multa pelo peso excedente" << endl;
    }else{
        cout << "Peso dentro do regulamento estadual." << endl;
    }

    return 0;
}
