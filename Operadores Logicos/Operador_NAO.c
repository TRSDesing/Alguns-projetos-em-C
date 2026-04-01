#include <stdio.h>

int main(){
    int a = -5;

    if (!(a > 0)){ //Operador lógico "!" para verificar se "a" não é positivo. (Funciona com o "b").
        printf("O número 'a' não é positivo.\n");
    } else { //Senao.
        printf("O número 'a' é positivo.\n"); //Essa mensagem aparece.
    }

    return 0;
}