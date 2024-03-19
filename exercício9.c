#include <stdio.h>
int main()
{
    int atual, nascimento, idadeAnos, idadeMeses, idadeDias;
    printf("\n*Calculo de Idade*");
    printf("\n\nDigite o ano atual: ");
    scanf("%d", &atual);
    printf("\nDigite o seu ano de nascimento: ");
    scanf("%d", &nascimento);
    idadeAnos = atual - nascimento;
    idadeMeses = idadeAnos * 12;
    idadeDias = idadeMeses * 30;
    printf("\nIdade em anos: %d", idadeAnos);
    printf("\nIdade em Meses: %d", idadeMeses);
    printf("\nIdade em Dias: %d", idadeDias);
    printf("\n\n");
    return 0;
}