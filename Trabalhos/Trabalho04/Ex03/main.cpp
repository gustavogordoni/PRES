#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int index = 10;
    cout << "N�meros de 10 a 100, inclusive\n\n";

    while(index <= 100){
        cout << index << endl;
        index++;
    }
    cout << "\nFim da execu��o.";

    return 0;
}
