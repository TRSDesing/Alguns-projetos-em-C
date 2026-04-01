#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char carta1;
    char carta2;
    char carta3;

    carta1 = 'A'; //Nome das cartas com char pois tem letras.
    carta2 = 'B';
    carta3 = 'C';

    char codigoCarta1 [5] = "AO1"; //Codigo das cartas utilizando o char pq tem letra
    char codigoCarta2 [4] = "BO2";
    char codigoCarta3 [4] = "CO3";


    char cidade1 [50] = "Sao Paulo"; //Nome das cidades, como sempre char para caracteres.
    char cidade2 [50] = "Rio de Janeiro";
    char cidade3 [50] = "Brasilia";

    int populacao1 = 12300000; //Populacao utilizando int pois é um numero inteiro.
    int populacao2 = 13000000;
    int populacao3 = 14000000;


    float area1 = 1521.0; //area utilizando float pois é um numero quebrado.
    float area2 = 1221.0;
    float area3 = 1300.0;


    float PIB1 = 100000.0; //PIB utilizando float pois é um numero quebrado.
    float PIB2 = 120000.0;
    float PIB3 = 140000.0;


    int pontosTur1 = 50; //Pontos turisticos utilizando int pois é um numero inteiro.
    int pontosTur2 = 30;
    int pontosTur3 = 40;


    float densidadepopulacional1 = (float) populacao1 / area1; //Densidade populacional utilizando float pois é um numero quebrado, e o "(float)" para que o resultado saia corretamente.
    float densidadepopulacional2 = (float) populacao2 / area2;
    float densidadepopulacional3 = (float) populacao3 / area3;


    float PIBpercapita1 = (float) PIB1 / populacao1; //Mesma coisa do anterior, utilizando float e "(float)" para que o resultado saia corretamente.
    float PIBpercapita2 = (float) PIB2 / populacao2;
    float PIBpercapita3 = (float) PIB3 / populacao3;


    float superpoder = populacao1 + area1 + PIB1 + pontosTur1 + densidadepopulacional1 + PIBpercapita1; //O superpoder é a soma de todas as caracteristicas da carta, utilizando float pois é um numero quebrado.
    float superpoder2 = populacao2 + area2 + PIB2 + pontosTur2 + densidadepopulacional2 + PIBpercapita2;
    float superpoder3 = populacao3 + area3 + PIB3 + pontosTur3 + densidadepopulacional3 + PIBpercapita3;

    int opcao;

    int escolhadoJogador, escolhaComputador;
    srand(time(0)); //Gera uma seed aleatória para a função rand().

    //Menu do jogo.
    
    printf("Menu principal: \n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Informações das cartas\n");
    printf("4. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    escolhaComputador = rand() % 3 + 1; //Gera um número aleatório entre 1 e 3 para o computador "escolher".

    //Opções do menu.

    switch (opcao)
    {
    case 1:
        printf("Iniciando o jogo de Super Mega Trunfo! \n\n");

        printf("Escolha uma carta: \n");
        printf("1. Carta 1 - %c\n", carta1);
        printf("2. Carta 2 - %c\n", carta2);
        printf("3. Carta 3 - %c\n", carta3);
        printf("Escolha: ");
        scanf("%d", &escolhadoJogador);

    //Switch para a escolha do jogador.
        
        switch (escolhadoJogador)
        {
        case 1:
            printf("Jogador escolheu a carta 1 - %c\n", carta1);
            break;

        case 2:
            printf("Jogador escolheu a carta 2 - %c\n", carta2);
            break;

        case 3:
            printf("Jogador escolheu a carta 3 - %c\n", carta3);
            break;

        default:
            printf("Opção inválida!\n");
            break;
        }

    //Switch para a escolha do computador.

        switch (escolhaComputador)
        {
        case 1:
            printf("Computador escolheu a carta 1 - %c\n\n", carta1);
            break;

        case 2:
            printf("Computador escolheu a carta 2 - %c\n\n", carta2);
            break;

        case 3:
            printf("Computador escolheu a carta 3 - %c\n\n", carta3);
            break;
        }

        //Resultado do jogo, comparando o superpoder das cartas escolhidas pelo jogador e pelo computador.

        if (escolhadoJogador == escolhaComputador){
            printf("### Empate! ###\n");
        }
        else if ((escolhadoJogador == 1 && escolhaComputador == 3) || (escolhadoJogador == 2 && escolhaComputador == 1) || (escolhadoJogador == 3 && escolhaComputador == 2)){ //Carta 1 ganha da carta 3, carta 2 ganha da carta 1 e carta 3 ganha da carta 2.
            printf("### O Jogador venceu! ###\n");
        }
        else{
            printf("### O Computador venceu! ###\n");
        }
        break;

    //Continuando o primeiro switch do menu.

    case 2:
        printf("Regras do jogo: \n");
        printf("- As cartas têm diferentes características. \n");
        printf("- escolha a carta com as melhores características. \n");
        break;

    case 3:
        printf("Informações das cartas: \n\n");

        //Carta 1

        printf("Carta 1: %c e Codigo: %s\n\n", carta1, codigoCarta1); //Imprime o nome da carta e o codigo da carta utilizando printf, com "%c" para char e "%s" para string.
        printf("Cidade: %s\n", cidade1);
        printf("Populacao: %d\n", populacao1); //Imprime a populacao utilizando "%d" para int.
        printf("Area: %.1f\n", area1); //Imprime a area utilizando "%.1f" para float com uma casa decimal.
        printf("PIB: %.1f\n", PIB1);
        printf("Pontos Turisticos: %d \n", pontosTur1); 
        printf("Densidade Populacional: %.2f\n", densidadepopulacional1); //Imprime a densidade populacional utilizando "%.2f" para float com duas casas decimais.
        printf("PIB per capita: %.2f\n\n", PIBpercapita1); //Dois "\n" para pular uma linha entre as cartas.
        printf("Superpoder da carta 1: %.2f\n\n", superpoder); //Imprime o superpoder da carta.

        //Carta 2

        printf("Carta 2: %c e Codigo: %s\n\n", carta2, codigoCarta2); //Mesma coisa da carta 1.
        printf("Cidade: %s\n", cidade2);
        printf("Populacao: %d\n", populacao2);
        printf("Area: %.1f\n", area2);
        printf("PIB: %.1f\n", PIB2);
        printf("Pontos Turisticos: %d \n", pontosTur2);
        printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
        printf("PIB per capita: %.2f\n\n", PIBpercapita2);
        printf("Superpoder da carta 2: %.2f\n\n", superpoder2);

        //Carta 3

        printf("Carta 3: %c e Codigo: %s\n\n", carta3, codigoCarta3); //Mesma coisa da carta 1 e 2.
        printf("Cidade: %s\n", cidade3);
        printf("Populacao: %d\n", populacao3);
        printf("Area: %.1f\n", area3);
        printf("PIB: %.1f\n", PIB3);
        printf("Pontos Turisticos: %d \n", pontosTur3);
        printf("Densidade Populacional: %.2f\n", densidadepopulacional3);
        printf("PIB per capita: %.2f\n\n", PIBpercapita3);
        printf("Superpoder da carta 3: %.2f\n\n", superpoder3);
        break;

    case 4:
        printf("Saindo do jogo...\n");
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}

//Meia hora pra no final que o problema foi por cause que não tinha colocado um break no case 1 ;-;.