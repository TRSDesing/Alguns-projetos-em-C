#include <stdio.h>

int main(){

    int estoque = 5;

    if (estoque < 5 ) { //se o estoque for menor que 5.
        printf("O estoque esta baixo.\n"); //Aparece essa mensagem.

    } else if (estoque > 5){ //senao
        printf("O estoque esta alto.\n"); //Aparece essa mensagem.
    } else {
        printf("O estoque esta normal.\n"); //Aparece essa mensagem.
    }

    return 0;
}