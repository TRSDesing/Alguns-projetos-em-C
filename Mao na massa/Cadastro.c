#include <stdio.h>

int main() {
    int idade;
    float altura;
    char nome[50];
    char filme_favorito[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite seu filme favorito: \n");
    scanf("%s", filme_favorito);

    printf("Nome do aluno: %s - filme favorito: %s\n", nome, filme_favorito);
    printf("Idade do aluno: %d - altura do aluno: %.2f", idade, altura);

    return 0;

}