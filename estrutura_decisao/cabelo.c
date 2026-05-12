#include <stdio.h>

int main(){

    int valorPintar = 50;
    int valorCortar = 40;
    int valorProgressiva = 195;
    int valorPenteado = 70;



    
    printf("voce pintou o cabelo? digite 0 para nao e 1 para sim");
    scanf("%i", &valorPintar);

    printf("voce cortou o cabelo?");
    scanf("%i", &valorCortar);

    printf("voce fez progressiva?");
    scanf("%i", &valorProgressiva);

    printf("voce fez penteado?");
    scanf("%i", &valorPenteado);

    float total = valorPintar + valorCortar + valorProgressiva + valorPenteado;

    if (total < 90 ) {
    printf("valor ficou barato R$ %.2f", total);
} else if (total >= 90 && total <= 160) {
    printf("valor ficou razoavel R$ %.2f", total);
} else if (total > 160 ) {
    printf("valor ficou caro R$ %.2f", total);
}
    return 0;
}