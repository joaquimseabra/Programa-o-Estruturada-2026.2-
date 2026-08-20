#include <stdio.h>
#define TOTAL 100

int idade, cont, votantes = 0, nao_votantes = 0;
float perc_votantes, perc_nao_votantes;

int main(){
    
    for (cont=1; cont<=TOTAL; cont=cont+1 ){
        printf("Informe a  idade da pessoa %d", cont);
        scanf("%d", &idade);
        
        while (idade<0 || idade>120){
            printf("Idade inválida. Por favor, digite um valor entre 0 e 120:");
            scanf("%d", &idade);
        }
        if (idade>=18 && idade<=90){
            printf("Essa pessoa tem %d anos e pode votar \n ",idade);
            votantes = votantes + 1;
        }
        else{
            printf("Essa pessoa tem %d anos e não pode votar \n ",idade);
            nao_votantes = nao_votantes + 1;
        }
    }

    printf("O total de votantes é: %d\n", votantes);
    printf("O total de não votantes é: %d\n", nao_votantes);
    perc_votantes = votantes * 100.0 / TOTAL;
    perc_nao_votantes = nao_votantes * 100.0 / TOTAL;
    printf("O percentual de votantes é: %f\n", perc_votantes);
    printf("O percentual de não votantes é: %f\n", perc_nao_votantes);
    
    return 0;
}