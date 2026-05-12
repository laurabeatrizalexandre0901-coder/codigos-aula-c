#include <stdio.h>

int main() {
    float valorPintarCabelo = 0;
    float valorCortarCabelo = 0;
    float valorHidratacao = 0;
    float valorEscova = 0;
    float valorProgressiva =0;
    float valorBabyLiss = 0;
    int opcao = 0; // 1- sim 0- nao

    printf("voce vai pintar o cabelo? 1- sim, 0- nao: ");
    scanf("%i", &opcao);

    if (opcao == 1) {
        printf("qual valor para pintar o cabelo? ");
        scanf("%f", &valorPintarCabelo);
    }

    printf("voce vai cortar o cabelo? 1- sim, 0- nao: ");
    scanf("%i", &opcao);

    if (opcao == 1) {
        printf("qual valor para cortar o cabelo? ");
        scanf("%f", &valorCortarCabelo);
    }

    printf("voce vai fazer hidratacao no cabelo? 1- sim, 0- nao: ");
    scanf("%i", &opcao);  

    if (opcao == 1) {
        printf("qual valor para fazer hidratacao no cabelo? ");
        scanf("%f", &valorHidratacao);
    }

    printf("voce vai fazer escova no cabelo? 1- sim, 0- nao: ");
    scanf("%i", &opcao);

    if (opcao == 1) {
        printf("qual valor para fazer escova no cabelo? ");
        scanf("%f", &valorEscova);
    }

    printf("voce vai fazer progressiva no cabelo? 1- sim, 0- nao: ");
    scanf("%i", &opcao);

    if (opcao == 1) {
        printf("qual valor para fazer progressiva no cabelo? ");
        scanf("%f", &valorProgressiva);
    }

    printf("voce vai fazer babyliss no cabelo? 1- sim, 0- nao: ");
    scanf("%i", &opcao);

    if (opcao == 1) {
        printf("qual valor para fazer babyliss no cabelo? ");
        scanf("%f", &valorBabyLiss);
    }

    float total = valorProgressiva + valorPintarCabelo + valorHidratacao + valorBabyLiss + valorEscova + valorCortarCabelo;

    if (total <= 150) {
        printf("esta barato, valor R$ %.2f\n", total);
    } else if (total > 150 && total <= 250) {
        printf("esta razoavel, valor R$ %.2f\n", total);
    } else if (total > 250) {
        printf("esta caro, valor R$ %.2f\n", total);
    }

    printf("vc vai pagar a vista ou parcelado? a vista - 1 parcelado -0");
scanf("%i", &opcao);

if (opcao == 1) {
    //desconto de 5%
    float desconto = total * 0.05;
    float totalDesconto = total - desconto;
    printf("o total e R$ %.2f", total);
    printf("o total com desconto e R$ %.2f", totalDesconto);

} else if (opcao == 0) {
    // parcelado
    int qtdParcela = 0;
    printf("quantas parcelas deseja fazer?");
    scanf("%i", &qtdParcela);
}



    return 0;
}

