#include <stdio.h>

int main(){
    float nota = 0;

    printf("qual sua nota?");
    scanf("%f", &nota);

    if (nota >= 6.9) {
     printf("voce esta aprovado %.2f", nota);
 } else {
    printf("voce esta reprovado %.2f", nota);
 }

     
    return 0;
}