#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Informe um número qualquer: ";
    cin >> num;

    cout << "O número informado foi: " << num;

    return 0;
}
