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
    int auth = 0, tentativas = 1;

    while(auth != 1 && tentativas <= 3){
        cout << "Digite sua senha: ";
        cin >> password;

        if(password == passwordValid){
            cout << "Senha Correta.\n\n";
            auth = 1;
        }else{
            cout << "Senha Incorreta.\n\n";
            tentativas++;
        }
    }
    return 0;
}
