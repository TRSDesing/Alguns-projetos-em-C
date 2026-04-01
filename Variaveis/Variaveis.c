#include <stdio.h>

int main(){
    int idade = 25; // Variável do tipo inteiro
    float altura = 1.75; // Variável do tipo ponto flutuante
    char letra = 'A'; // Variável do tipo caractere
    char nome[20] = "VonBananão"; // Variável do tipo string/para caracteres

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Letra: %c\n", letra);
    printf("Nome: %s\n", nome);

    return 0;
}

//Só uma coisa que notei, isso é até que é parecido com python