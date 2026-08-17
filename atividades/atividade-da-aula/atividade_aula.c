#include <stdio.h>
#include <math.h>

#define PI 3.1415

double volume;
double comprimento;
double area;
double raio;



int main(){
    printf("Informe o valor do Raio");
    scanf("%lf", &raio);

    area = pow(raio,2)* PI;
    comprimento = 2 * PI * raio;
    volume = (4.0/3.0) * PI * pow(raio,3);

    printf("O comprimento da circunferência de raio R é: %f\n",comprimento);
    printf("A área da circunferência de raio R é: %f\n", area);
    printf("O volume da circunferência de raio R é: %f\n", volume);
}
