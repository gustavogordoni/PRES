#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[5] = {1, 2, 3, 4, 5};
    int *p = vet;
    int i;

    for (i = 0; i < 5; i++)
        cout << endl << p[i] << endl;

    return 0;
}
