#include <stdio.h>

int main(){
    int variavel;

    printf("Digite um numero: ");
    scanf("%d", &variavel);

    switch (variavel) {
        case 1:
        printf("Codigo a ser executado se variavel for igual a 1. \n");
        printf("Teste do case 1. \n");
        break; //O break é necessário para que o código pare de ser executado.

        case 2:
        printf("Codigo a ser executado se variavel for igual a 2. \n");
        printf("Teste do case 2. \n");
        break;

        default: //O default é o código que será executado se a variável não for igual a nenhum dos casos anteriores.
        printf("Codigo a ser executado se variavel for diferente de 1 e 2. \n");
        break;
    }

    return 0;
}

//Funciona com letras se mudar para char e substituir os numeros pelos caracteres, e o "%d" por "%c" no scanf. Ira funcionar igual ao do numero.