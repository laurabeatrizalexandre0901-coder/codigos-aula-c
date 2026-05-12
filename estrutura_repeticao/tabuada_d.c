#include <stdio.h>

int main() {
    int i = 0;
    int res = 0;
int tabuada = 4;
int numero = 0;
printf("\n digite a tabuada que deseja");
scanf("%i", &tabuada);
printf("tabuada");

while (i <= 10)
{
    res = i * tabuada;
    printf("\n%i X %i = %i", tabuada, i, res);
    i++;
}
 do{
        printf("digite um numero ou 0 para sair");
        scanf("%i", &numero);

     } while (numero != 0);
    printf("fim");

    return 0;
}