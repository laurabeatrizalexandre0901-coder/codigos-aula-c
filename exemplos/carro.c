/*Você precisa comprar um carro
 e pretende realizar o pagamento de
 forma parcelada.
 Crie um algoritmo que calcule o valor das
 parcelas descontando a o valor da entrada de 30%.
  */

  #include <stdio.h>
   
  int main(){
    //entrada
float valorCarro = 0;
int qtdeParcelas = 0;
const float entrada30 = 0.30;

printf("qual valor do carro?\n");
scanf("%f", &valorCarro);

printf("quanta parcelas deseja pagar?");
scanf("%i", &qtdeParcelas);

   //processamento
float valorEntrada = valorCarro * entrada30;
    float valorRestante = valorCarro - valorEntrada;
    float valorParcela = valorRestante / qtdeParcelas;

    // saída
    printf("Valor restante: R$ %.2f\n", valorRestante);
    printf("Valor de cada parcela: R$ %.2f\n", valorParcela);

    return 0;
  }