#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float quilometro, tempo, velocidadeMedia;
    string nome;

    cout << "Informe seu nome: ";
    cin >> nome;

    cout << "\nInforme a quantidade de quilômetros percorridos de bicicleta: ";
    cin >> quilometro;

    cout << "\nInforme a quantidade de tempo gasto (em minutos): ";
    cin >> tempo;

    velocidadeMedia = quilometro / (tempo / 60);
    cout << "\nOlá " << nome << ", você percorreu " << quilometro << " Km em " << tempo << " minutos, sua velocidade média foi: " << velocidadeMedia << " Km/h.";

    return 0;
}
