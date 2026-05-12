#include <stdio.h>

int main(){
   int dia = 0;

printf("qual dia da semana? (dom->0, sab->6)");
scanf("%i", &dia);

if (dia == 0) { 
    printf("domingo so alegria");
} else if (dia == 1) { 
    printf("segunda,bora trabalhar ):");
} else if (dia == 2) {
    printf("terca, vamos pra cima");
} else if (dia == 3) {
    printf("quarta, meio da semana");
} else if (dia == 4) {
    printf("quinta, quase final de semana");
} else if (dia == 5) {
    printf("sexta, amanha ja e final de semana");
} else if (dia == 6) {
    printf("sabado, finalmente");
} else {
    printf("dia nao encontrado");
}


    return 0;
}