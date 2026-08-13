#include <stdio.h>

float valor_da_conta;
int dias_de_atraso;
float valor_da_multa_por_dia_de_atraso;
float percentual_de_juros_por_dia_de_ataso;


int main(){

    printf("Informe o valor da conta \n");
    scanf("%f", &valor_da_conta);

    printf("Informe a quantidade de dias de atraso \n");
    scanf("%d", &dias_de_atraso);

    printf("Informe o valor da multa por dia de atraso \n");
    scanf("%f", &valor_da_multa_por_dia_de_atraso);


    printf("Informe o percentual de juros por dia de atraso \n");
    scanf("%f", &percentual_de_juros_por_dia_de_ataso);
    

    float juros = percentual_de_juros_por_dia_de_ataso/100;
    float multa_total = valor_da_multa_por_dia_de_atraso * dias_de_atraso;
    float juros_total = juros * dias_de_atraso * valor_da_conta;
    float conta_total = valor_da_conta + juros_total + multa_total;


    printf("O valor da multa por %d dias de atraso é R$: %f\n",dias_de_atraso,multa_total);
    printf("O valor dos juros a ser pago por %d dias de atraso é R$: %f\n",dias_de_atraso,juros_total);
    printf("O valor total da conta a ser pago já com multa e juros é R$: %f\n",conta_total);
};