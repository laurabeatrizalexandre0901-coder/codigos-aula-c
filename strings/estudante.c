#include <stdio.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL, "pt_BR.UTF-8");

char nome[40];
char idade[40];
char serie[40];
char curso[40];

printf("\nqual seu nome: ");
scanf(" %[^\n]", nome);

printf("\nqual sua idade: ");
scanf(" %[^\n]", idade);

printf("\nqual sua serie: ");
scanf(" %[^\n]", serie);

printf("\nqual seu curso: ");
scanf(" %[^\n]", curso);

printf("Minhas informações ");
printf("\nnome: %s", nome);
printf("\nidade: %s", idade);
printf("\nserie: %s", serie);
printf("\ncurso: %s", curso);
    return 0;
}