#include <stdio.h>

int main() {
printf("vamos calcular as notas do aluno");


int qtdeNotas = 0;
float nota = 0;
float totalNotas = 0;
float mediaFinal = 0;

printf("\n quantas notas deseja calcular?");
scanf("%i", &qtdeNotas);

for (int =0; i < qtdeNotas; i ++) {
    
    printf("\n qual a nota do aluno");
    scanf("%f", &nota);

    totalNotas = totalNotas + nota;

}

mediaFinal = totalNotas / qtdeNotas;

printf("\n a media final é %.2f", mediaFinal);

if (mediaFinal >= 7) {
    printf("\n aprovada");
} else {
    printf("\n reprovado");
}

    return 0;
}