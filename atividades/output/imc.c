#include <stdio.h>

int main(){

    float peso = 58;
    float altura = 1.64;

    printf("Ola vamos começar o IMC \n");

    float resultados = peso / (altura * altura);

    printf("o IMC e %f", resultados);

    return 0;
}