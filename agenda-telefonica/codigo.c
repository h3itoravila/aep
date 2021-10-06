#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char nome[200];
    int diaNasc; //dia nascimento
    int mesNasc; //mês nascimento
    int anoNasc; //ano nascimento
    char email[100];
} Dados;
int main()
{
    Dados agenda[100];
    int dia, mes, ano;
    preencher(agenda);
    printf("Informe uma data.\nDigite o dia:");
    scanf("%d", &dia);
    printf("\nDigite o mes:");
    scanf("%d", &mes);
    printf("\nDigite o ano:");
    scanf("%d", &ano);
    listarPelaData(agenda, dia, mes, ano);
    return 0;
}
