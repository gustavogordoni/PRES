#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout << "Sou aluno de BSI no IFSP";

    return 0;
}
