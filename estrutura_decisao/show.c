#include <stdio.h>
#include <stdbool.h>

int main() {
bool comprouIngressoAntes;
bool  comprouIngressoNaHora;

printf("comprou ingresso antes? 0-n 1-s");
scanf("%d", &comprouIngressoAntes);

printf("comprou o ingresso na hora? 0-n 1-s");
scanf("%d", &comprouIngressoNaHora);

comprouIngressoAntes || comprouIngressoNaHora;

if (comprouIngressoAntes || comprouIngressoNaHora) {
    printf("vai assitir o show!!!");
} else {
    printf("nao vai assistir o show");
}

return 0;

}