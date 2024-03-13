#include <stdio.h>
int main()
{
    float real, dolar;
    int opcao;
    printf("\n*Conversao Real/Dolar*");
    printf("\n\nQual conversao voce quer fazer? \n Real -> Dolar (1) \n Dolar -> Real (2)\n");
    printf("\nOpcao Escolhida (1 ou 2): ");
    scanf("%i", &opcao);
    if (opcao==1 || opcao==2)
    {
    if (opcao==1)
    {
        printf("\nDigite a quantidade em reais: R$ ");
        scanf("%f", &real); 
        dolar = real / 4.97;
        printf("\nTaxa de conversao: 4.97");
        printf("\nR$ %4.2f = $ %4.2f dolares\n", real, dolar);
        printf("\n\n");
    }
    if (opcao==2)
    {
        printf("\nDigite a quantidade em dolares: ");
        scanf("%f", &dolar);
        real = dolar * 4.97;
        printf("\nTaxa de conversao: 4.97");
        printf("\n$%4.2f = R$ %4.2f\n", dolar, real);
        printf("\n\n");
    }
    }
    else
    {
        printf("\nEssa opcao nao existe, tente novamente...");
        printf("\n\n");
    }
    return 0;
}