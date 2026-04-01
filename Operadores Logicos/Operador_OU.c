#include <stdio.h>

int main(){
    int a = -5;
    int b = 10;

    if (a > 0 || b > 0){ //Operador lógico "||" para verificar se pelo menos um dos números é positivo.
        printf("Pelo menos um dos números é positivo.\n");
    } else { //Senao.
        printf("Nenhum dos números é positivo.\n"); //Essa mensagem aparece.
    }

    return 0;
}