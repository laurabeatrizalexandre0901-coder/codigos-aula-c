#include <stdio.h>

int main(){
 
    
float notas[] = {0, 0, 0, 0};

printf("digite todas as 4 notas:");
    scanf ("%f", &notas);

for (int i=0; i < 4; i++) {
    printf("\nNota: %.2f", notas[i]);
}


    return 0;
}