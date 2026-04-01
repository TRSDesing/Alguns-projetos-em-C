#include <stdio.h>

int main(){
    int idade = 36;
    int resultado;

    idade >= 18 ? printf("Maior de idade\n") : printf("Menor de idade\n"); //Utilizando o operador ternário para verificar se a idade é maior ou igual a 18.
    
    return 0;

}

//estilo if else só que mais compacto, utilizando o operador ternário "? :" para verificar a condição e imprimir a mensagem correspondente.