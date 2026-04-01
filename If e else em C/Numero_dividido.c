#include <stdio.h>

int main(){

    int num = 5, resultado;

    resultado = num % 2; //O operador "%" realiza a divisão do numero por 2.

    printf("A variavel do resultado é: %d\n", resultado); //Resultado da divisão do numero por 2, utilizando "%d" para int.

    if (resultado == 0){ //se o numero dividido por 2 tiver resto igual a 0, se for par
        printf("O numero e par.\n", num); //Aparece essa mensagem
    } else { //senao, se o numero for impar
        printf("O numero e impar.\n", num); //Aparece essa mensagem
    }
    return 0;
}