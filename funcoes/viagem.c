#include <stdio.h>
#include <locale.h>

void viagem(float distancia, float consumo, float gasolina, float etanol) {
    float litros = distancia / consumo;

    printf("\nGasto com gasolina: R$ %.2f", litros * gasolina);
    printf("\nGasto com etanol: R$ %.2f", litros * etanol);

    if (etanol <= gasolina * 0.7) {
        printf("\nVale mais a pena usar etanol.");
    } else {
        printf("\nVale mais a pena usar gasolina.");
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float distancia, consumo, gasolina, etanol;

    printf("Distancia da viagem: ");
    scanf("%f", &distancia);

    printf("Consumo do carro (km/L): ");
    scanf("%f", &consumo);

    printf("Preco da gasolina: ");
    scanf("%f", &gasolina);

    printf("Preco do etanol: ");
    scanf("%f", &etanol);

    viagem(distancia, consumo, gasolina, etanol);

    return 0;
}