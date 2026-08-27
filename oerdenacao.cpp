#include <stdio.h>

void ordenar (float a, float b, float c){
    float aux;
    if (a>b) {
        aux = a;
        a = b;
        b = aux;
    }

    if (b>c) {
        aux = b;
        b = c;
        c = aux;
    }
    
    if (a>b) {
        aux = a;
        a = b;
        b = aux;
    }
    printf("Valores ordenados: %f, %f, %f \n", a,b,c);
}

int main(){
    float n1,n2,n3;
    printf("Informe o primeiro número: ");
    scanf("%f", &n1);
    printf("Informe o segundo número: ");
    scanf("%f", &n2);
    printf("Informe o terceiro número: ");
    scanf("%f", &n3);
    ordenar(n1,n2,n3);
    return 0;
}