#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *p, *p1, x = 10;
    float y = 20.0;

    p = &x;
    cout << "*p = " << *p << endl;
    p1 = p;
    cout << "*p1 = " << p1 << endl;
    p = &y;

    return 0;
}
