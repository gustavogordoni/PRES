#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *p, *p1, x, y;
    p = &x;
    p1 = &y;

    cout << "&y = " << &y << endl << "&x = " << &x << endl;

    if(p == p1)
        cout << "Ponteiros iguais --- " << endl;
    else
        cout << "Ponteiros diferentes --- " << endl;

    return 0;
}
