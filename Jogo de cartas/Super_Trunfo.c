#include <stdio.h>

int main(){
    char carta1;
    char carta2;

    carta1 = 'A'; //Nome das cartas com char pois tem letras.
    carta2 = 'B';

    char codigoCarta1 [5] = "AO1"; //Codigo das cartas utilizando o char pq tem letra
    char codigoCarta2 [4] = "BO2";

    char cidade1 [50] = "Sao Paulo"; //Nome das cidades, como sempre char para caracteres.
    char cidade2 [50] = "Rio de Janeiro";

    int populacao1 = 12300000; //Populacao utilizando int pois é um numero inteiro.
    int populacao2 = 13000000;

    float area1 = 1521.0; //area utilizando float pois é um numero quebrado.
    float area2 = 1221.0;

    float PIB1 = 100000.0; //PIB utilizando float pois é um numero quebrado.
    float PIB2 = 120000.0;

    int pontosTur1 = 50; //Pontos turisticos utilizando int pois é um numero inteiro.
    int pontosTur2 = 30;

    float densidadepopulacional1 = (float) populacao1 / area1; //Densidade populacional utilizando float pois é um numero quebrado, e o "(float)" para que o resultado saia corretamente.
    float densidadepopulacional2 = (float) populacao2 / area2;

    float PIBpercapita1 = (float) PIB1 / populacao1; //Mesma coisa do anterior, utilizando float e "(float)" para que o resultado saia corretamente.
    float PIBpercapita2 = (float) PIB2 / populacao2;

    float superpoder = populacao1 + area1 + PIB1 + pontosTur1 + densidadepopulacional1 + PIBpercapita1; //O superpoder é a soma de todas as caracteristicas da carta, utilizando float pois é um numero quebrado.
    float superpoder2 = populacao2 + area2 + PIB2 + pontosTur2 + densidadepopulacional2 + PIBpercapita2;

    //Para que fique organizado, cada carta tem seus dados agrupados.

    //Carta um.

    printf("Carta 1: %c e Codigo: %s\n\n", carta1, codigoCarta1); //Imprime o nome da carta e o codigo da carta utilizando printf, com "%c" para char e "%s" para string.
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1); //Imprime a populacao utilizando "%d" para int.
    printf("Area: %.1f\n", area1); //Imprime a area utilizando "%.1f" para float com uma casa decimal.
    printf("PIB: %.1f\n", PIB1);
    printf("Pontos Turisticos: %d \n", pontosTur1); 
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1); //Imprime a densidade populacional utilizando "%.2f" para float com duas casas decimais.
    printf("PIB per capita: %.2f\n\n", PIBpercapita1); //Dois "\n" para pular uma linha entre as cartas.
    printf("Superpoder da carta 1: %.2f\n\n", superpoder); //Imprime o superpoder da carta.
    
    //Carta dois.
    
    printf("Carta 2: %c e Codigo: %s\n\n", carta2, codigoCarta2); //Mesma coisa da carta 1.
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.1f\n", area2);
    printf("PIB: %.1f\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontosTur2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per capita: %.2f\n\n", PIBpercapita2);
    printf("Superpoder da carta 2: %.2f\n\n", superpoder2);

    printf("Comparação entre as cartas: carta 1 %d carta \n\n", superpoder > superpoder2); //Comparação entre as cartas com "%d" para int, o resultado da comparação é 0 ou 1.

    switch (carta1)
    {
    case 1:
        printf("Carta 1 é a vencedora!\n");
        break;

    case 2:
        printf("Carta 2 é a vencedora!\n");
        break;

    case 3:
        printf("As cartas empataram!\n");
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;

}