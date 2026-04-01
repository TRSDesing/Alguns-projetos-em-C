#include <stdio.h>

int main(){
    int a = 5;
    int b = -10;
    int c = 0;

    if (a > 0 && b < 0 || c == 0){ //Operadores lógicos "&&" e "||" para verificar se a é positivo e b é negativo, ou se c é igual a zero.
        printf("A condição é verdadeira. \n");
    } else {
        printf("A condição é falsa. \n");
    }

    return 0;
}