#include <stdio.h>

int main(){
  
    float valorLanche = 0;
    float valorBatataGrande = 0;
    float valorRefriCoca = 0;
    float valorSorvete = 0;

    printf ("qual o valor do lanche?");
    scanf ("%f", &valorLanche);
 
    printf ("qual o valor da batata?");
    scanf ("%f", &valorBatataGrande);

        printf ("qual o valor do refri?");
    scanf ("%f", &valorRefriCoca);

        printf ("qual o valor do sorvete?");
    scanf ("%f", &valorSorvete);
    
float total = valorLanche + valorBatataGrande + valorRefriCoca + valorSorvete;


if (total < 40 ) {
    printf("valor ficou barato R$ %.2f", total);
} else if (total >= 40 && total <= 55) {
    printf("valor ficou razoavel R$ %.2f", total);
} else if (total > 55 ) {
    printf("valor ficou caro R$ %.2f", total);
}

    return 0;
}