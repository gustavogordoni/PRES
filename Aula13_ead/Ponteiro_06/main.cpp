#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *p = 0x5DC; // 1500
    char *c = 0x5DC; // 1500

    cout << "*p = " << p << " c = " << c << endl;
    p++;
    c++
    cout << "*p = " << p << " c = " << c << endl;

    return 0;
}
