#include <stdio.h>

float preco_produto;
float percent_desconto;

int main(){

printf("Insira o valor do produto:");
scanf("%f", &preco_produto);


printf("Insira a porcentagem do desconto do produto:");
scanf("%f", &percent_desconto);


float calculo_percent_desconto = percent_desconto * 0.01;
float desconto = preco_produto * calculo_percent_desconto;
float preco_final = preco_produto - desconto;


printf("Preço real do produto:  ");
printf("%f\n", preco_produto);

printf("Preço final do produto:  ");
printf("%f\n",preco_final);

printf("Total economizado:  ");
printf("%f\n", desconto);




};