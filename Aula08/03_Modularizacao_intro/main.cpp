#include <iostream>
#include <locale>

using namespace std;

int maiorNum(int a, int b, int c){
    int maior;

    maior = a;

    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }

    return maior;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int primeiro, segundo, terceiro, a, b, c, x, y, z, maior_1, maior_2;

    cout << "Informe o primeiro conjunto de três números inteiros: ";
    cin >> primeiro >> segundo >> terceiro;

    maior_1 = maiorNum(primeiro, segundo, terceiro);

    cout << "Informe o segundo conjunto de três números inteiros: ";
    cin >> x >> y >> z;

    maior_2 = maiorNum(x, y, z);

    cout << "\n\nO maior valor informado do primeiro conjunto é: " << maior_1;
    cout << "\nO maior valor informado do segundo conjunto é: " << maior_2 << endl << endl;

    cout << maior_1 << " + " << maior_2 << " = " << (maior_1 + maior_2) << endl;

    return 0;
}
