#include <stdio.h>

int main(){
    int idade; // Variável do tipo inteiro
    float altura; // Variável do tipo ponto flutuante
    char letra; // Variável do tipo caractere
    char nome[20]; // Variável do tipo string/para caracteres
    
    printf("Digite sua idade: ");
    scanf("%d", &idade); // Lê um inteiro do usuário e armazena em idade
    printf("Sua idade é: %d\n", idade); // Imprime a idade do usuário
    
    printf("Digite sua altura: ");
    scanf("%f", &altura); // Lê um número de ponto flutuante do usuário e armazena em altura
    printf("Sua altura é: %.2f\n", altura); // Imprime a altura do usuário
    
    printf("Digite uma letra: ");
    scanf(" %c", &letra); // Lê um caractere do usuário e armazena em letra (note o espaço antes de %c pro codigo funcionar corretamente)
    printf("Sua letra é: %c\n", letra); // Imprime a letra do usuário

    printf("Digite seu nome: ");
    scanf("%s", nome); // Lê uma string do usuário e armazena em nome (não é necessário usar & para strings)
    printf("Seu nome é: %s\n", nome); // Imprime o nome do usuário

    return 0;
}

//Só uma coisa que notei, isso é até que é parecido com python