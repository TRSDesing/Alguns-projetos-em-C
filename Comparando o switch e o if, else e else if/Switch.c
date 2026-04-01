#include <stdio.h>

int main(){
    int dia;

    printf("Digite qualquer dia: \n");
    scanf("%d", &dia);

    switch(dia){ //Igual um sandwich, onde o switch é o pão, e os cases(casos) são os recheios. O switch é a estrutura de controle que vai verificar qual opção o usuário escolheu, e os cases são as opções que o usuário pode escolher. O default é o código que será executado se a variável não for igual a nenhum dos casos anteriores.
        case 1:
            printf("Domingo\n");
            break; //O break pra dar uma quebrada para que o codigo nao continue executando em cima dos outros cases.

        case 2:
            printf("Segunda-feira\n");
            break;

        case 3:
            printf("Terça-feira\n");
            break;

        case 4:
            printf("Quarta-feira\n");
            break;

        case 5:
            printf("Quinta-feira\n");
            break;

        case 6:
            printf("Sexta-feira\n");
            break;

        case 7:
            printf("Sábado\n");
            break;
            
        default:
            printf("Dia inválido!\n");
    }

    return 0;
}

//Mais organizado e facil de entender.