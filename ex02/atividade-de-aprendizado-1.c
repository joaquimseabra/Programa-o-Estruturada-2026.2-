#include <stdio.h>

float altura;
float base;


int main(){

    printf("Digite a altura do triângulo");
    scanf("%f",&altura);

    printf("Digite o valor da base do triângulo");
    scanf("%f",&base);

    float resultado = (base*altura)/2;

    printf("%f",resultado);
}