#include <stdio.h>

int main(){
    int num1 = 10, num2, resultado;

    resultado = 10;
    printf("O resultado e: %d\n", resultado);

    //resultado = resultado + 20;
    resultado += 20;
    printf("O resultado e: %d\n", resultado);

    //resultado = resultado - num1
    resultado -= num1;
    printf("O resultado e: %d\n", resultado);

    //resultado = resultado * 5;
    resultado *= 5;
    printf("O resultado e: %d\n", resultado);

    //resultado = resultado / 2;
    resultado /= 2;
    printf("O resultado e: %d\n", resultado);

    return 0;
}