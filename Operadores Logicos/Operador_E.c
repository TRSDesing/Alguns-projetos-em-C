#include <stdio.h>

int main(){

    int a = 5;
    int b = 10;

    if (a > 0 && b > 0){ //Operador lógico "&&" para verificar se ambos os números são positivos.
        printf("Ambos os números são positivos.\n");
    } else { //Senao.
        printf("Um dos números não é positivo.\n"); //Essa mensagem aparece.
    }

    return 0;

}