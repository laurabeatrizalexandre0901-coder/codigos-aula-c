#include <stdio.h>

int main() {
    int numero, i;

    printf("digite a tabuada que deseja");
    scanf("%d", &numero);

for(i = 1; i <= 10; i ++) {
    printf("%d x %d = %d\n", numero, i, numero * i );
}
    

    return 0;
}