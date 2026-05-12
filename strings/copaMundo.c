#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    char grupoBrasil[4][50];
    int resultados[3][2];

    printf("Vamos preencher o grupo do Brasil na copa\n");

    for (int i = 0; i < 4; i++)
    {
        printf("Qual seleção? ");
        scanf(" %[^\n]", grupoBrasil[i]);
    }

    printf("\nLegal, agora vamos ver o resultado dos jogos\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nPartida %i: %s x %s\n", i + 1,
               grupoBrasil[0], grupoBrasil[i + 1]);

        printf("Digite o placar (ex: 2 1): ");
        scanf("%d %d", &resultados[i][0], &resultados[i][1]);
    }

    printf("\nAgora vamos para os resultados:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s %d x %d %s\n",
               grupoBrasil[0],
               resultados[i][0],
               resultados[i][1],
               grupoBrasil[i + 1]);
    }

    return 0;
}