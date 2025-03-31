#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int golsSaoPaulo, golsPalmeiras;

    cout << "*** Placar São Paulo X Palmeiras ***" << endl;
    cout << "Digite a quantidade de gols do São Paulo: ";
    cin >> golsSaoPaulo;

    cout << "Digite a quantidade de gols do Palmeiras: ";
    cin >> golsPalmeiras;

    if(golsSaoPaulo > golsPalmeiras){
        cout << "A festa é tricolor!" << endl;
    }else{
        cout << "A festa é dos porcos!" << endl;
    }
    return 0;
}
