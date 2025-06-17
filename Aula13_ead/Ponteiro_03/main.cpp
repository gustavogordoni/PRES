#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x = 10;
    int *p;

    p = &x;
    cout << "x = " << x << endl;
    *p = 12;
    cout << "*p = " << *p << endl;
    cout << "x = " << x << endl;

    return 0;
}
