#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    for (i = 1; i <= 10; i++){
        cout << setw(5) << i << setw(10) << "X" << setw(10) << "6 " << setw(10) << "= " << setw(10) << i*6 << endl;
    }

    return 0;
}
