#include <stdio.h>
#include <locale.h>


void NumerosPares() {
    printf("--- Listando Numeros Pares de 1 a 200 ---\n");
   
    for (int i = 1; i <= 200; i++) {
   
        if (i % 2 == 0) {
            printf("Numero par: %i\n", i);
        }
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
   
    NumerosPares();
   
    return 0;
}
