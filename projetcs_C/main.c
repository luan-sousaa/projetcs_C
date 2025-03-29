#include "lib.h"
#include <stdio.h>

int main(void){
    int escolha;
    float n1,n2;
    do {
        printf(" 1 - soma\n 2 - subtracao\n 3 - divisao\n 4 - multiplicacao\nEscolha a operaçao para desejada :");
        scanf("%i",&escolha);
    } while (escolha <= 0 || escolha >4);
    printf("Digito Correto");
    
    switch (escolha) {
        case 1:
            printf("digite o primeiro  digito :");
            scanf("%f",&n1);

            printf("digite o  segundo digito :");
            scanf("%f",&n2);
            
            printf("a soma de %.2f + %.2f = %.2f",n1 , n2 ,soma(n1, n2));
            break;
        case 2:
            printf("digite o primeiro  digito :");
            scanf("%f",&n1);

            printf("digite  segundo digito :");
            scanf("%f",&n2);
            
            printf("a subtracao de %.2f - %.2f = %.2f",n1 , n2 ,subtracao(n1, n2));
            break;
        case 3:
                printf("digite o primeiro  digito :");
                scanf("%f",&n1);
                printf("digite o segundo digito :");
                scanf("%f",&n2);
            if (n2 != 0) {
                printf("a divisao de %.2f / %.2f = %.2f",n1 , n2 ,divisao(n1, n2));

            }else{
                printf("indefinido");
            }
            
            break;
        case 4:
            printf("digite o primeiro  digito :");
            scanf("%f",&n1);

            printf("digite o segundo digito :");
            scanf("%f",&n2);
            
            printf("a multiplicacao de %.2f * %.2f = %.2f",n1 , n2 ,multiplicacao(n1, n2));
            break;
        default:
            printf("ERRO DE DIGITO");
            break;
    }
    
}
