#include <stdio.h>
#include <locale.h>

void compararAcademias() {
    float vidaMensal = 49.99;
    float vidaAnual = 12 * 39.99;

    float saudeMensal = 59.99;
    float saudeAnual = 12 * 48.99;

    float fitMensal = 69.99;
    float fitAnual = 12 * 58.99;

    printf("\nVIDA SAUDE");
    printf("\nMensal: R$ %.2f", vidaMensal);
    printf("\nAnual: R$ %.2f", vidaAnual);

    printf("\nSAUDE EM DIA");
    printf("\nMensal: R$ %.2f", saudeMensal);
    printf("\nAnual: R$ %.2f", saudeAnual);

    printf("\nITNESS PRO");
    printf("\nMensal: R$ %.2f", fitMensal);
    printf("\nAnual: R$ %.2f", fitAnual);

    printf("\n\nPlano anual mais barato: VIDA SAUDE");
    printf("\nMelhor para quem quer ir todos os dias: FITNESS PRO");
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    compararAcademias();

    return 0;
}