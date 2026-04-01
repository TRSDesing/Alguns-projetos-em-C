#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numerodoJogador, numerodoComputador, resultado;
    char tipocomparacao;

    //gerar numero aleatorio.
    srand(time(0)); //Gera uma seed aleatória para a função rand().
    numerodoComputador = rand() % 100 + 1; //Numero de um a 100.

    //inicio do jogo.
    printf("Bem-vindo ao jogo maior, menor ou igual! \n");
    printf("Voce deve escolher um numero e o tipo de comparação: \n");
    printf("M. maior\n");
    printf("N. menor\n");
    printf("I. igual\n");
    printf("Digite o numero: \n");

    printf("Escolha a comparação (M/N/I): \n");
    scanf(" %c", &tipocomparacao);

    printf("Digite seu numero (entre 1 a 100): \n");
    scanf("%d", &numerodoJogador);

    //exibir o numero do computador.
    printf("O computador escolheu o numero: %d\n", numerodoComputador);

    //sandwich pra verificar o tipo de comparação escolhida pelo jogador e comparar os numeros, para armazenar o resultado.
    switch (tipocomparacao)
    {    case 'M':
         case 'm':
            printf("Voce escolheu a opção maior.\n");
            resultado = numerodoJogador > numerodoComputador ? 1 : 0;
            break;
        case 'N':
        case 'n':
            printf("Voce escolheu a opção menor.\n");
            resultado = numerodoJogador < numerodoComputador ? 1 : 0;
            break;
        case 'I':
        case 'i':
            printf("Voce escolheu a opção igual.\n");
            resultado = numerodoJogador == numerodoComputador ? 1 : 0;
            break;

        default:
            printf("Opção de comparação inválida!\n");
            break;
}

if (resultado == 1) {
        printf("Você ganhou!\n");
    } else {
        printf("Você perdeu!\n");
    }

    return 0;
}
