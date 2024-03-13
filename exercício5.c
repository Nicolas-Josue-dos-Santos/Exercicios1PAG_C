#include <stdio.h>
int main()
{
    float sBase, sReceber, gratificacao, imposto;
    printf("\n*Calculo de Salario a Receber*");
    printf("\n\nDigite seu salario-base: R$ ");
    scanf("%f", &sBase);
    gratificacao = 0.05 * sBase;
    imposto = 0.07 * sBase;
    sReceber = sBase + gratificacao - imposto;
    printf("\nSeu salario-base: R$ %4.2f", sBase);
    printf("\nGratificacao salarial (5%%): R$ %4.2f", gratificacao);
    printf("\nImposto cobrado (7%%): R$ %4.2f", imposto);
    printf("\nSeu salario a receber = R$ %4.2f", sReceber);
    printf("\n\n");
    return 0;
}