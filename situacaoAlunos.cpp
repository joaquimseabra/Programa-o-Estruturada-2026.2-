#include <stdio.h>
// assinatura dos métodos
void definir_media (float n1, float n2);
char definir_conceito(float m);



int main (){
    float nota1,nota2;
    int aluno;

    for (aluno = 1; aluno <=60; aluno = aluno + 1){

    

        printf("Informe a nota da primeira avaliação: \n");
        scanf("%f", &nota1);
        while ( nota1 < 0 || nota1 > 10){
            printf("Nota inválida! Digite valor de 0 a 10: ");
            scanf("%f", &nota1);
        }
        printf("Informe a nota da segunda prova: ");
        scanf("%f", &nota2);
        while (nota2 < 0 || nota2 > 10 ){
            printf("Nota inválida! Informe um valor de 0 a 10:  ");
            scanf("%f", &nota2);
        }
    }
    
    return 0;
}



void definir_media (float n1, float n2){
    float media;
    char c;
    media = (n1 + n2) / 2;
    c = definir_conceito (media);
    printf("Média do aluno: %.2f e conceito final: %c \n", media, c);
}

char definir_conceito(float m){

    char conceito;
    if (m < 5.0){
        conceito = 'D';
    } 
    else if(m < 7.0){
        conceito = 'C';
    }
    else if(m < 9.0){
        conceito = 'B';
    }
    else{
        conceito = 'A';
    }
    return 0;
}