 #include <stdio.h>

void orcamento() {
    float placaVideo = 139.90;
    float caixaSom = 99.90;
    float kitMouseTeclado = 149.90;
    float monitor = 679.90;

    float total, valorVista, parcela;

    printf("Voce deseja comprar:\n");
    printf("1 - Placa de video: R$ %.2f\n", placaVideo);
    printf("2 - Caixa de som: R$ %.2f\n", caixaSom);
    printf("3 - Kit mouse e teclado: R$ %.2f\n", kitMouseTeclado);
    printf("4 - Monitor 21 polegadas: R$ %.2f\n\n", monitor);

    total = placaVideo + caixaSom + kitMouseTeclado + monitor;

    valorVista = total - (total * 0.15);
    parcela = total / 12;

    printf("===== ORCAMENTO =====\n");
    printf("Valor total das pecas: R$ %.2f\n", total);
    printf("A vista com 15%% de desconto: R$ %.2f\n", valorVista);
    printf("Parcelado em 12x sem juros: R$ %.2f por parcela\n", parcela);
}

int main() {
    orcamento();

    return 0;
}