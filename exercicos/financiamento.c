#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

char nome [20];
char veiculo [60];
char imovel [50];


const int jurosImovel = 0.005;
const int jurosVeiculo =0.015;

float renda = 0;
float valorParcela = 0;
float valorFinanciamento = 0;
float totaljuros = 0;
float totalJurosRS = 0;
float valorTotal = 0;
float entrada = 0;

int parcelas = 0;
int servico = 0;

printf("----BEM-VINDO!----");

    printf("\nQual o seu nome?");
scanf("%s", nome);

   printf("\nObrigado por escolher nossa loja, %s", nome);
   printf("\nQual tipo de finaciamento vc deseja?(Digite 1- para Veiculo 0- para imovel)");
   scanf("%i", &servico);


if (servico == 0) {
printf("\n----Opções e Prazos----");
printf("\n1- casa -> de 150 à 360 meses");
printf("\n2- apartamento -> de 100 à 300 meses");

printf("\nqual imovel vc deseja financiar?");
scanf("%s", imovel);


} else if (servico == 1) {
    printf("\n----Opções e Prazos");
    printf("\n1- caminhões -> de 100 à 300 meses");
    printf("\n2- carros -> de 6 à 28 meses");
    printf("\n3- motos -> de 3 à 24 meses ");

    printf("\nqual veiculo deseja financiar?");
    scanf("%s", veiculo);


} else{
    printf("\nOpção indisponivel");
}

   printf("\nqual o valor do financiamento?");
   scanf("%f", &valorFinanciamento);

   printf("\nEm quantos meses você deseja realizar o pagamento?");
   scanf("%i", &parcelas);
 
   printf("\nQual valor de entrada seria melhor para você? (caso não queira digite o número 0)");
   scanf("%f", &entrada);
   switch (servico)
   {
   case 1:
totaljuros = (parcelas * jurosImovel) / 100;
totalJurosRS = valorFinanciamento * totaljuros;
valorTotal = (valorFinanciamento - entrada) + totalJurosRS;
valorParcela = valorTotal / parcelas;
    break;

    case 2:
totaljuros = (parcelas * jurosVeiculo) / 100;
totalJurosRS = valorFinanciamento * totaljuros;
valorTotal = (valorFinanciamento - entrada) + totalJurosRS;
valorParcela = valorTotal / parcelas;
    break;
   
   default:
    break;
   }

printf("\nQual a sua renda mensal?");
scanf("%f", &renda);

float rendaTrinta = renda * 0.3;

if (valorParcela < rendaTrinta)
{
    printf("\nParabéns! Seu financiamento  foi aprovado");
    printf("\nvalor de parcela: %2.f", valorParcela);
    printf("\nQuantidade de parcelas: %i", parcelas);
} else{
    printf("financiamento negado");
} 


printf("\nDesenvolvido por: Laura Beatriz Alexandre");
    return 0;
}