#include <stdio.h>
#include <locale.h>

void ola(){
    printf("seja bem vindo");
}


void calcularMedia(float n1, float n2){
  float media = (n1 + n2) / 2;
 printf("\n a media é: %.2f", media);
}

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

float n1 = 0;
float n2 = 0;

 ola(); // executar a função
 
printf("insira a nota da prova:");
scanf("%f", &n1);

printf("insira a nota da seguda prova:");
scanf("%f", &n2);


   

    calcularMedia( n1, n2);
    return 0;
}