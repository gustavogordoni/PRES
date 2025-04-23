#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /* getline */

    string nome;
    cout << "Olá, vamos conversar?" << endl;

    cout << "Qual é o seu nome?\n";
    getline(cin, nome);
    cout << "\n\nNossa, " << nome << ", que nome feio.\n";

    return 0;
}
