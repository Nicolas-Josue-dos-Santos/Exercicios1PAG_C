#include <stdio.h>
int main()
{
    float b, h, area;
    printf("\n*Calculo de area de Triangulo*");
    printf("\n\nDigite a medida da base do triangulo: ");
    scanf("%f", &b);
    printf("\nDigite a medida da altura do triangulo: ");
    scanf("%f", &h);
    area = (b * h)/2;
    printf("\nA area do triangulo com base: %4.2f e altura: %4.2f\n = %4.2f", b, h, area);
    printf("\n\n");
    return 0;
}