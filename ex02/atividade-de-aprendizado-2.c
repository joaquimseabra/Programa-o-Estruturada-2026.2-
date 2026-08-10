#include <stdio.h>
#include <math.h>


float altura;
float diametro;
float PI = 3.1415;


int main(){


printf("Insira o qual é a altura em metros");
scanf("%f",&altura);


printf("Insira qual é o diametro em metros");
scanf("%f",&diametro);


float raio = (diametro/2);
float base = (pow(raio,2) * PI);
float volume = base * altura;
float litros = volume*1000;


printf("A caixa consegue armazenar em litros:");
printf("%f",litros);


};