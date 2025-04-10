#include <iostream>
#include <locale>
#include<cmath>

using namespace std;

/* 3. Escreva um programa em C++ para ler o raio de
    um círculo, calcular e escrever a sua área e perímetro.
    Fórmulas:  perímetro =  2 * pi * r, área - pi * r ^ 2, onde r é o raio e
    vale 3.14, ou pode ser obtido através da biblioteca (cmath), utilizando
    a constante M_PI.
**/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float ray, area, perimeter;
    const float pi = M_PI;

    cout << "Informe o valor do raio de um círculo: ";
    cin >> ray;

    area = pi * pow(ray, 2);
    perimeter = 2 * pi * ray;

    cout << "\nO valor do PERÍMETRO desse círculo é: " << perimeter << endl;
    cout << "O valor da ÁREA desse círculo é: " << area << endl;

    return 0;
}
