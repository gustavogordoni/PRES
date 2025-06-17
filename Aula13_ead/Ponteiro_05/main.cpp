#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *p = 0x5DC; // 1500

    cout << "*p = " << p << endl; //
    p++;
    cout << "p = " << p << endl; // 1504
    p = p + 15;
    cout << "p = " << p << endl; // 1564
    p = p - 2;
    cout << "p = " << p << endl; // 1565

    return 0;
}
