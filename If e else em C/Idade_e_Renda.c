#include <stdio.h>

int main(){
    int idade;
    float rendaMensal;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua renda mensal: ");
    scanf("%f", &rendaMensal);

    if (idade <= 18 || idade >= 60) { //Se a idade for menor ou igual a 18 ou maior ou igual a 60, o usuário tem direito ao desconto.
        if (rendaMensal < 2000) {
            printf("Voce tem desconto!\n"); //Mostra essa mensagem se a renda mensal for menor que 2000, ou seja, se o usuário tiver direito ao desconto.
        } else { //senao
            printf("Voce não tem direito ao desconto devido a renda mensal.\n"); //mostra essa mensagem. 
        }

    } else { //senao.
        printf("Voce não tem direito ao desconto devido à idade.\n"); //essa mensagem aparece. 
    }

    return 0;
}