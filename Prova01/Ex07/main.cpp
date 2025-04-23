#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    string letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    if(letra == "a" || letra == "A"){
        cout << "\n\nVogal\n\n";
    }else if(letra == "e" || letra == "E"){
        cout << "\n\nVogal\n\n";
    }else if(letra == "i" || letra == "I"){
        cout << "\n\nVogal\n\n";
    }else if(letra == "o" || letra == "O"){
        cout << "\n\nVogal\n\n";
    }else if(letra == "u" || letra == "U"){
        cout << "\n\nVogal\n\n";
    }else{
        cout << "\n\nConsoante\n\n";
    }

    return 0;
}
