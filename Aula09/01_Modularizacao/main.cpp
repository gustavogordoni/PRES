#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

void oi(void){
    cout << "Oi, esse é o primeiro exemplo de definição de FUNÇÃO em C++." << endl;
    cout << "Ainda veremos outros exemplos." << endl << endl;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //SetConsoleCP(1252);
    //SetConsoleOutputCP(1252);

    int i = 1;

    while(i <= 5){
        oi();
        i++;
    }

    return 0;
}
