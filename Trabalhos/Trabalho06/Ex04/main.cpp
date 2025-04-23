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

    string passwordValid = "1234";
    string password;

    cout << "Digite sua senha: ";
    cin >> password;

    if(password == passwordValid){
        cout << "ACESSO PERMITIDO.\n\n";
    }else{
        cout << "ACESSO NEGADO.\n\n";
    }

    return 0;
}
