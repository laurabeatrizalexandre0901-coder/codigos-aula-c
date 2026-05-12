#include <stdio.h>

int main(){
int numeroInicial = 0;
int numerofinal = 0;

printf("digite um numero para o inicio maior que 0");
scanf ("%i", &numeroInicial);

if (numeroInicial < 0) {
    printf("numero invalido,fim");
} else {
    printf("qual o numero final maior que %i", numeroInicial);
    scanf("%i", &numerofinal);

    if (numerofinal >= numeroInicial) {
// continuar rodar o for
for (int i = numeroInicial; i <= numerofinal; i ++){
    printf("numero %i \n", i);
}
    } else {
        //numero final menor ou igual ao inicio
        printf("numeros invalidos,fim \n");
        printf("numeroinicial %i, numerofinal %i", numeroInicial, numerofinal);
    }
}


for (int i= numeroInicial; i < numerofinal; i ++) {
    printf("\n numero %i", i);
}
    return 0;
}