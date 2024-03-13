#include <stdio.h>
int main()
{
    float horas, sBruto, sLiquido, inss;
    printf("\n*Calculo de Salarios Liquidos*");
    printf("\n\nQuantas horas o operario cumpriu nesse mes?\n- ");
    scanf("%f", &horas);
    sBruto = horas*3;
    inss = 0.08 * sBruto;
    sLiquido = sBruto - inss;
    printf("Horas trabalhadas: %4.2fh", horas);
    printf("\nSalario Bruto: R$ %4.2f", sBruto);
    printf("\nINSS (8%%): R$ %4.2f", inss);
    printf("\nSalario Liquido = R$ %4.2f", sLiquido);
    printf("\n\n");
    return 0;
}