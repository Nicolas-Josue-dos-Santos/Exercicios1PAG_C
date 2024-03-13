#include <stdio.h>
int main()
{
    float n1, n2, n3, media;
    printf("\n*Calculo de Media Aritmetica*");
    printf("\n\nDigite 3 numeros: ");
    printf("\n- ");
    scanf("%f", &n1);
    printf("- ");
    scanf("%f", &n2);
    printf("- ");
    scanf("%f", &n3);
    printf("Numeros selecionados: %4.2f, %4.2f e %4.2f", n1, n2, n3);
    media = (n1 + n2 + n3)/3;
    printf("\n\nA media aritmetica desses 3 valores:(%4.2f, %4.2f e %4.2f)\n= %4.2f", n1, n2, n3, media);
    printf("\n\n");
    return 0;
}