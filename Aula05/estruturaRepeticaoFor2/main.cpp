#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    for (i = 3; i <= 100; i+=3){
        cout << setw(5) << i << endl;
    }

    return 0;
}
