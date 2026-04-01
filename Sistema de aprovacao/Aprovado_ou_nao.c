#include <stdio.h>

int main(){
    int opcao;
    int nota1, nota2, media;

    printf("Menu de gerenciamento de estudantes: \n");
    printf("1. Calcular média\n");
    printf("2. Determinar status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular media: \n");
        printf("Digite a primeira nota: ");
        scanf("%d", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%d", &nota2);

        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) { //se as notas forem válidas, calcula a média.
            media = (nota1 + nota2) / 2;
            printf("A média é: %d\n", media);
        } else {
            printf("Não foi possível calcular notas inválidas.\n");
        }

        break;

    case 2:
        printf("Determinar status: \n");
        printf("Entrar com a média: ");
        scanf("%d", &media);
        //media >= 5 ? printf("Aprovado\n") : printf("Reprovado\n"); //Utilizando o operador ternário para determinar se o estudante está aprovado ou reprovado com base na média.

        if(media >= 7){
            printf("Aprovado\n");
        } else if (media >= 5 && media < 7){
            printf("Recuperação\n");
        } else {
            printf("Reprovado\n");
        }
        break;

    case 3:
        printf("Saindo do programa...\n");
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}