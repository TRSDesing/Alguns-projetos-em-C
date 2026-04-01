#include <stdio.h>

int main(){
    int idade;

    idade = 20;

    if (idade > 17){ //se idade for maior que 17
        printf("Voce e maior de idade.\n"); //Aparece essa mensagem
        
    } else if (idade < 17){ //se idade for menor que 17
        printf("Voce e menor de idade.\n"); //Aparece essa mensagem
    } else { //senao
        printf("Voce tem exatamente 17 anos.\n"); //Aparece essa mensagem
        
    }

    return 0;

}