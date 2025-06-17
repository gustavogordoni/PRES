#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[5] = {1, 2, 3, 4, 5};

    cout << "&vet[2] = " << &vet[2] << endl;
    cout << "&vet[2] = " << (vet + 2) << endl;

    return 0;
}
