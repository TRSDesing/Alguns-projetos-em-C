#include <stdio.h>

int main(){

    float temperatura = 30.0;

    if (temperatura > 30.0){ //se temperatura for maior que 30.0
        printf("A temperatura esta alta.\n"); //Aparece essa mensagem

    } else if (temperatura < 15.0){ //senao se a temperatura for menor que 15.0
        printf("A temperatura esta baixa.\n"); //Aparece essa mensagem
    } else { //senao
        printf("A temperatura esta normal.\n"); //Aparece essa mensagem
    }

    return 0;
}