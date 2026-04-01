#include <stdio.h>

int main(){
    int num1, num2;

    num1 = 10;
    num2 = 5;

    if (num1 > num2){ //se num1 for maior que num2
        printf("O numero %d e maior que o numero %d.\n", num1, num2); //Aparece essa mensagem
    } else //senao
    {
        printf("O numero %d e menor que o numero %d.\n", num1, num2); //Aparece essa mensagem
    }

    return 0;

}