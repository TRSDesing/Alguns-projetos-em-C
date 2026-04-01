#include <stdio.h> //Biblioteca basica.
#include <stdlib.h> //Biblioteca para usar a função rand() e srand() para gerar números aleatórios.
#include <time.h> //Biblioteca para usar a função time() para gerar uma seed(lembra das seeds do minecraft para ficar mais facil) aleatória para a função rand().

int main(){
    int EscolhadoJogador, EscolhaComputador;
    srand(time(0)); //Gera uma seed aleatória para a função rand().

    printf("Jogo de Quartzo, Pergaminho e Podadeira! \n");
    printf("Escolha uma opção: \n");
    printf("1. Quartzo\n");
    printf("2. Pergaminho\n");
    printf("3. Podadeira\n");
    printf("Escolha: ");
    scanf("%d", &EscolhadoJogador);

    EscolhaComputador = rand() % 3 + 1; //Gera um número aleatório entre 1 e 3 pro computador "escolher".

    switch (EscolhadoJogador)
    {
    case 1:
        printf("Jogador escolheu: Quartzo! - ");
        break;
    case 2:
        printf("Jogador escolheu: Pergaminho! - ");
        break;
    case 3:
        printf("Jogador escolheu: Podadeira! - ");
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    switch (EscolhaComputador)
    {
    case 1:
        printf("O computador escolheu: Quartzo!\n");
        break;
    case 2:
        printf("O computador escolheu: Pergaminho!\n");
        break;
    case 3:
        printf("O computador escolheu: Podadeira!\n");
        break;
    }

    if (EscolhadoJogador == EscolhaComputador){
        printf("### Empate! ###\n");
    }
    else if ((EscolhadoJogador == 1 && EscolhaComputador == 3) || (EscolhadoJogador == 2 && EscolhaComputador == 1) || (EscolhadoJogador == 3 && EscolhaComputador == 2)){ //Quartzo ganha da podadeira, pergaminho ganha do quartzo e podadeira ganha do pergaminho.
        printf("### O Jogador venceu! ###\n");
    }
    else{
        printf("### O Computador venceu! ###\n");
    }

    return 0;
}