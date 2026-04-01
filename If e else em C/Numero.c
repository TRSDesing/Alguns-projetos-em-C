#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0){ //se o numero for maior que zero.
        printf("O numero é positivo. \n"); //essa mensagem aparece.
    } else if (numero < 0){ //senao, se o numero for menor que zero.
        printf("O numero é negativo. \n"); //Aparece essa mensagem.
    } else { //senao
        printf("O numero é zero. \n"); //Aparece essa mensagem.
    }

    return 0;
}