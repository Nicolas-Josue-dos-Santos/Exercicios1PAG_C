#include <stdio.h>
int main()
{
    int resultado;
    resultado = (26/12) + 5 * ((10+(20/3))/(9%2)) - (4 * (3 - 8));
    printf("\n*Calculo de equacao*");
    printf("\n\nO resultado da seguinte expressao:\n(26/12) + 5 * ((10+(20/3))/(9%%2)) - (4 * (3 - 8))\n = %d", resultado);
    printf("\n\n");
    return 0;
}