#include <stdio.h>

int main(){

    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o numero 1: \n"); //Para que o usuario digite o numero 1
    scanf("%d", &num1);

    printf("Entre com o numero 2: \n"); //Para que o usuario digite o numero 2
    scanf("%d", &num2);

    soma = num1 + num2;

    subtracao = num1 - num2;

    multiplicacao = num1 * num2;

    divisao = num1 / num2;

    printf("A soma e: %d\n", soma); //para mostrar o resultado da soma
    printf("A subtracao e: %d\n", subtracao); //para mostrar o resultado da subtracao
    printf("A multiplicacao e: %d\n", multiplicacao); //para mostrar o resultado da multiplicacao
    printf("A divisao e: %d\n", divisao); //para mostrar o resultado da divisao

    return 0;

}