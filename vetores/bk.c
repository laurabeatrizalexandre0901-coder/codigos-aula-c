#include <stdio.h>

int main(){

char lanches[4][20] = {
"rodeio", "whopper",
"cheddar duplo", "big king"
};

printf("--------Meus Lanches favs-----------");
for (int i=0; i < 4; i++) {
printf("\n %s", lanches[i]);

}

    return 0;
}