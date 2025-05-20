#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int quadrado (int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int s1, s2, s3;

    cout << "Informe 3 n�meros inteiros: ";
    cin >> s1 >> s2 >> s3;

    if(s1 > 0 && s2 > 0 && s3 > 0 &&
       (quadrado(s1) + quadrado(s2) == quadrado(s3) ||
        quadrado(s2) + quadrado(s3) == quadrado(s1) ||
        quadrado(s3) + quadrado(s1) == quadrado(s2))
    ){
        cout << "\nEssas medidas podem formar um tri�ngulo reto.\n";
    }else{
        cout << "\nEssas medidas n�o podem formar um tri�ngulo reto.\n";
    }

    return 0;
}

int quadrado(int n){
    return n * n;
}
