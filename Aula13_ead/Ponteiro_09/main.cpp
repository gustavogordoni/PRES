#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    void *pp;
    int *p1, p2 = 10;

    p1 = &p2;
    pp = &p2;

    cout << "O Endereço em pp: " << pp << endl;

    pp = &p1;

    cout << "O Endereço em pp: " << pp << endl;

    pp = p1;

    cout << "O Endereço em pp: " << pp << endl;

    return 0;
}
