#include <iostream>
#include <locale>
#define QNT 10

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

     int value[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

     cout << "Os valores do vetor são: \n";
     for(int i = 0; i < 10; i++){
        cout << value[i] << " - ";
     }

     cout << endl << endl;

     cout << "Os valores do vetor na ordem inversa são: \n";
     for(int i = 0; i < 10; i++){
        cout << value[9 - i] << " - ";
     }

     cout << endl << endl;

    return 0;
}
