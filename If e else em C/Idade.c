#include <stdio.h>

int main(){
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade); //Lê a idade do usuário utilizando scanf, com "%d" para int e "&idade" para armazenar o valor na variável idade.

    if (idade < 12) { //Se a idade for menor que 12, o usuário é uma criança.
        printf("Voce é uma criança.\n");
    } else if (idade >= 12 && idade < 18) { //Se a idade for maior ou igual a 12 e menor que 18, o usuário é um adolescente.
        printf("Voce é um adolescente.\n");
    } else if (idade >= 18 && idade < 60) { //Se a idade for maior ou igual a 18 e menor que 60, o usuário é um adulto.
        printf("Voce é um adulto.\n");
    } else if(idade >= 60 && idade <= 80){
        printf("Voce é um idoso.\n");
    } else{
        printf("Voce conheceu o Tutancâmon!\n");
    }

    return 0;
}