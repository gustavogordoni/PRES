#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int index = 50;
    cout << "Números de 50 a 10, inclusive\n\n";

    while(index >= 10){
        cout << index << endl;
        index--;
    }
    cout << "\nFim da execução.";

    return 0;
}
