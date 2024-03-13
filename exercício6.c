#include <stdio.h>
int main()
{
    float r, h, volume;
    printf("\n*Calculo do volume do Cilindro*");
    printf("\n\nDigite a medida do raio do cilindro: ");
    scanf("%f", &r);
    printf("\nDigite a medida da altura do cilindro: ");
    scanf("%f", &h);
    volume = 3.141592 * r * r * h;
    printf("\nO volume do cilindro com raio: %4.2f e altura: %4.2f\n = %4.2f", r, h, volume);
    printf("\n\n");
    return 0;
}