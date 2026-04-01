#include <stdio.h> //Biblioteca basica.
#include <stdlib.h> //Biblioteca para usar a função rand() e srand() para gerar números aleatórios.
#include <time.h> //Biblioteca para usar a função time() para gerar uma seed(lembra das seeds do minecraft para ficar mais facil) aleatória para a função rand().

int main(){
    int opcao;
    int regras;
    int numero_secreto, palpite;

    //Menu do jogo.
    printf("Menu principal: \n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Executando o jogo...\n");
        
        srand(time(0)); //Gera uma seed aleatória para a função rand() usando o tempo atual.
        numero_secreto = rand() % 9; //Gera um número aleatório entre 0 e 10.
        printf("Tente adivinhar o número secreto de 0 a 9: \n");
        scanf("%d", &palpite);

        //Pode usar o if-else aqui, porque é só para verificar se o palpite do usuário é igual ao número secreto ou não.
        if (palpite == numero_secreto){
            printf("Parabéns! Você acertou o número secreto!\n");
        }
        else{
            printf("Errou! O número secreto era: %d Boa sorte na próxima!\n", numero_secreto);
        }
        break;
    
    case 2:
        printf("Sobre as regras do jogo \n");
        printf("Digite a opção relacionada as regras do jogo, para ler as regras do jogo: \n");
        printf("1. Regra 1\n");
        printf("2. Regra 2\n");
        printf("3. Regra 3\n");
        scanf("%d", &regras);

        //tem como colocar as regras do jogo em um switch ;-; (meio confuso? sim, mas é só para praticar o switch mesmo) para o usuário escolher qual regra ele quer ler, ou se ele quer ler todas as regras de uma vez.
        switch(regras){
            case 1:
                printf("Regra 1: O número secreto é um número entre 0 e 9.\n");
                break;
            
            case 2:
                printf("Regra 2: O jogador tem apenas um palpite para adivinhar o número secreto.\n");
                break;
            
            case 3:
                printf("Regra 3: Se o jogador acertar o número secreto, ele ganha. Se errar, ele perde.\n");
                break;
            
            default:
                printf("Opção inválida! Volte para o menu principal e escolha uma opção válida.\n");
                break;

        }
        
        break;
    
    case 3:
        printf("Saindo do jogo...\n");
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

}