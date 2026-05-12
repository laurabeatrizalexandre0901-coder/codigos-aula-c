#include <stdio.h>

int main(){

    // variaveis
    float peso = 0;
    float alt = 0;

    
    printf("Qual o seu peso? ");
    scanf("%f", &peso);

    printf("Qual a sua altura? ");
    scanf("%f", &alt);

    float total_imc = peso / (alt * alt);

    printf("Seu IMC e: %.2f\n", total_imc);

    if(total_imc < 18.5){
        printf("Voce esta abaixo do peso.\n");
    }
    else if(total_imc >= 18.5 && total_imc <= 24.9){
        printf("Voce esta com peso normal.\n");
    }
    else if(total_imc >= 25.0 && total_imc <= 29.9){
        printf("Voce esta com sobrepeso.\n");
    }
    else{
        printf("Voce esta obeso.\n");
    }

    return 0;
}