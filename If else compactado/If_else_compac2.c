#include <stdio.h>

int main(){
    int idade = 1;
    int resultado;

    resultado = idade >= 18 ? 1 : 0; //Utilizando o operador ternário para verificar se a idade é maior ou igual a 18, e armazenando o resultado em uma variável.

    if (resultado == 1) { //Utilizando a variável resultado para verificar se é maior de idade ou não.
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    return 0;

}