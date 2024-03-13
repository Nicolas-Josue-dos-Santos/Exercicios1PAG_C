#include <stdio.h>
int main()
{
    float  n1, n2, n3, p1, p2, p3, media;
    printf("\n*Calculo de Media*");
    printf("\nDigite sua Nota 1: ");
    scanf("%f", &n1);
    printf("\nDigite sua Nota 2: ");
    scanf("%f", &n2);
    printf("\nDigite sua Nota 3: ");
    scanf("%f", &n3);
    printf("\nDigite o Peso da Nota 1: ");
    scanf("%f", &p1);
    printf("\nDigite o Peso da Nota 2: ");
    scanf("%f", &p2);
    printf("\nDigite o Peso da Nota 3: ");
    scanf("%f", &p3);
    media = (n1*p1 + n2*p2 + n3*p3)/(p1 + p2 + p3);
    printf("\nNota 1: %4.2f", n1);
    printf("\nNota 2: %4.2f", n2);
    printf("\nNota 3: %4.2f", n3);
    printf("\nPeso 1: %4.2f", p1);
    printf("\nPeso 2: %4.2f", p2);
    printf("\nPeso 3: %4.2f", p3);
    printf("\n\nMedia: %4.2f", media);
    printf("\n\n");
    if (media>=6)
    {
        printf("Parabens! Voce foi aprovado! :)");
        printf("\n\n");
    }
    else
    {
        printf("Infelizmente voce foi reprovado :(");
        printf("\n\n");
    }
    return 0;
}