#include <stdio.h>

int main(){
    int opcao;

    printf("Menu principal: \n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Executando o jogo...\n");
        break;
    
    case 2:
        printf("Regras do jogo: \n");
        printf("- Regra 1\n");
        printf("- Regra 2\n");
        printf("- Regra 3\n");
        break;
    
    case 3:
        printf("Saindo do jogo...\n");
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}

//menu simples, só as opções. Tuo funcionando direitinho e cheirosinho.