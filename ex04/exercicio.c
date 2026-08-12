#include <stdio.h>

float tempo;
float velocidade_media;
float consumo_veiculo;

int main(){

    printf("Insira em quanto tempo a viagem foi feita");
    printf("Insira o valor em horas");
    scanf("%f", &tempo);


    printf("Insira a velocidade média da viagem");
    printf("Insira a velocidade em KM/H ");
    scanf("%f", &velocidade_media);


    printf("Insira o consumo do veiculo");
    printf("Insira o valor em KM/L");
    scanf("%f", &consumo_veiculo);

    float distancia = velocidade_media * tempo;
    float litros_gastos = distancia/consumo_veiculo;

    printf("A quantidade de litros gastos na viagem foi de:");
    printf("%f",litros_gastos);


};

