#include <stdio.h>
 int main(){
    //entrada
float rodeio = 24.99;
float refri = 7.99;
float batataGrande = 14.99;
float cumpom7 = 0.07;
    //processamento
    float total = rodeio + refri + batataGrande;
    float desconto = total * cumpom7;
    float totalPagar = total - desconto;

    //saída
    printf("o total e R$ %.2f", total);
    printf("o desconto foi de R$ %.2f \n", desconto);
    printf("o total a ser pago e R$ %.2f", totalPagar);

    return 0;
 }