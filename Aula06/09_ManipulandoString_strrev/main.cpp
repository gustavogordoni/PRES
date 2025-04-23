#include <iostream>
#include <locale>
#include <cstring>

#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    /* strrev */

    char work[20];
    cout << "Este exemplo inverte uma palavra." << endl;
    cout << "Digite uma palavra: " << endl;
    cin >> work;
    cout << "A palavra " << work << " invertida fica: " << strrev(work) << endl;

    return 0;
}
