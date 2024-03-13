#include <stdio.h>
int main()
{
    float grausCelsius, grausFahrenheit;
    int opcao;
    printf("\n*Transformacao Celsius/Fahrenheit*");
    printf("\n\nQual conversao voce quer fazer? \n Celsius -> Fahrenheit (1) \n Fahrenheit -> Celsius (2)\n");
    printf("\nOpcao Escolhida (1 ou 2): ");
    scanf("%i", &opcao);
    if (opcao==1 || opcao==2)
    {
    if (opcao==1)
    {
        printf("\nDigite a temperatura em graus Celsius: ");
        scanf("%f", &grausCelsius); 
        grausFahrenheit = grausCelsius * 1.8 + 32;
        printf("\n%4.2f graus Celsius = %4.2f graus Fahrenheit\n", grausCelsius, grausFahrenheit);
        printf("\n\n");
    }
    if (opcao==2)
    {
        printf("\nDigite a temperatura em graus Fahrenheit: ");
        scanf("%f", &grausFahrenheit);
        grausCelsius = (grausFahrenheit - 32)/1.8;
        printf("\n%4.2f graus Fahrenheit = %4.2f graus Celsius\n", grausFahrenheit, grausCelsius);
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