#include <stdio.h>

int main(){
    int dia;

    printf("Digite qualquer dia: \n");
    scanf("%d", &dia);

    if (dia == 1){ //se o dia for igual a 1, ou seja, domingo.
        printf("Domingo\n"); //essa mensagem aparece.
    }
    else if (dia == 2){ //senao se o dia for igual a 2, ou seja, segunda-feira.
        printf("Segunda-feira\n");
    }
    else if (dia == 3){ //senao se o dia for igual a 3, ou seja, terça-feira.
        printf("Terça-feira\n");
    }
    else if (dia == 4){ //e assim vai.
        printf("Quarta-feira\n");
    }
    else if (dia == 5){
        printf("Quinta-feira\n");
    }
    else if (dia == 6){
        printf("Sexta-feira\n");
    }
    else if (dia == 7){
        printf("Sábado\n");
    }
    else{
        printf("Dia inválido!\n");
    }

    return 0;
}

//Vendo assim rapido parece muita coisa, mas é só o normal, começa com if, depouis se tiver muita coisa coloca else if até chegar no final onde voce coloca else e a ulltima opção, que é o caso de erro, ou seja, quando o usuário digitar um número que não seja entre 1 e 7.

//Só é mais trabalhoso, porque tem que ficar digitando "else if" toda hora, mas é a mesma coisa que o switch, só que o switch é mais organizado e legível quando tem muitas opções a serem verificadas. 

//O switch é uma alternativa ao uso de múltiplos if-else.

//MAS se for só para verificar uma ou duas opções, o if-else é mais simples e mais fácil de entender, mas se for para verificar muitas opções, o switch é mais organizado e legível.