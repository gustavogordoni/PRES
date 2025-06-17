#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    void *pp;
    int p2 = 10;

    pp = &p2;

    cout << "O Endereço em pp: " << * (int*)pp << endl;

    return 0;
}
