#include <stdio.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL, "pt_BR.URF-8");

char nome[6] = "Laura";
char logradouro[20] = "Av indpendencia";
char bairro[8] = "sophia";
char cidade[11] = "piracicaba";
char uf[3] = "SP";

printf("Minhas informações residenciais");
printf("\nLogradouro: %s", logradouro);
printf("\nbairro: %s", bairro);
printf("\ncidade: %s", cidade);
printf("\nUF: %s", uf);

    return 0;
}