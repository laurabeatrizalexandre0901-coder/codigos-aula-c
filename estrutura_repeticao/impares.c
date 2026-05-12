#include <stdio.h>

int main() {
    int contador = 0;

    while (contador <= 100) {
        if (contador % 2 != 0) { 
            printf("\nNumero impar: %d", contador);
        }
        contador++;
    }

    return 0;
}