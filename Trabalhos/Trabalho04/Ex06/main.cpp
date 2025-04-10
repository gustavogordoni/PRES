#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int index = 100, sum = 0;

    while(index <= 200){
        if(index % 2 == 0){
            sum = sum + index;
        }
        index++;
    }

    cout << "A soma dos pares entre 100 e 200 é: " << sum << endl;
    return 0;
}
