#include <stdio.h>

int main(){
    char produto1 [50] = "Arroz";
    char produto2 [50] = "Feijao";

    unsigned int estoqueA = 1000; //O estoque utilizando unsigned, pois o estoque não pode ser negativo.
    unsigned int estoqueB = 2000;

    float precoA = 5.50; //O preço utilizando float, pois o preço pode ser um número quebrado.
    float precoB = 7.30;

    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;

    double valorTotalA; //O valor total utilizando double, pois o valor total pode ser um número quebrado, e o double tem mais precisão do que o float.
    double valorTotalB;

    int resultadoA, resultadoB; //O resultado da comparação utilizando int.

    printf("produto: %s - estoque: %u - preco: %.2f - estoque minimo: %u\n", produto1, estoqueA, precoA, estoqueminimoA);
    printf("produto: %s - estoque: %u - preco: %.2f - estoque minimo: %u\n\n", produto2, estoqueB, precoB, estoqueminimoB);

    resultadoA = estoqueA > estoqueminimoA; //Comparação para verificar o estoque.
    resultadoB = estoqueB > estoqueminimoB;

    printf("O produto %s tem estoque minimo %d\n", produto1, resultadoA);
    printf("O produto %s tem estoque minimo %d\n\n", produto2, resultadoB);

    printf("Valor total de Arroz (R$ %.2f) é maior que o valor total de feijão (R$ %.2f): %d\n", estoqueA * precoA, estoqueB * precoB, (estoqueA * precoA) > (estoqueB * precoB)); //Comparação para verificar o valor total dos produtos.

    return 0;

}