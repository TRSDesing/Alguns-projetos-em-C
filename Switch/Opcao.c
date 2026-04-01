#include <stdio.h>

int main(){
    int opcao;
    float saldo = 1000.00; //seu "saldo" salvo no "banco de dados" ficticio do usuario.

    printf("Escolha uma opcao: \n"); //Imprime as opções para o usuário escolher.
    printf("1 - Verificar saldo\n"); //Imprime as opções para o usuário escolher.
    printf("2 - Realizar deposito\n"); //Imprime as opções para o usuário escolher.
    printf("3 - Realizar saque\n"); //Imprime as opções para o usuário escolher.
    scanf("%d", &opcao); //Lê a opção escolhida pelo usuário e armazena na variável "opcao".

    switch (opcao) //Tipo um sandwich, onde o switch é o pão, e os cases(casos) são os recheios. O switch é a estrutura de controle que vai verificar qual opção o usuário escolheu, e os cases são as opções que o usuário pode escolher. O default é o código que será executado se a variável não for igual a nenhum dos casos anteriores.  
    {
    case 1: //caso 1 ou opção 1.
        printf("Seu saldo é: R$ %.2f\n", saldo); //Pra ver o saldo do usuário, caso ele escolha a opção 1.
        break;
    
    case 2: //caso 2 ou opção 2.
        printf("Digite o banco que deseja depositar: \n"); //autoexplicativo.
        scanf("%d", &opcao);
        printf("Digite a agencia que deseja depositar: \n");
        scanf("%d", &opcao);
        printf("Digite a conta que deseja depositar: \n");
        scanf("%d", &opcao);
        break;
    
    case 3: //caso 3 ou opção 3.
        printf("Digite o valor que deseja sacar: \n");
        scanf("%f", &saldo);
        break;
    
    default: //caso default ou opção inválida.
        printf("Opção inválida!\n"); //caso o usuário escolha uma opção que não existe.
        break;
    }

    return 0;

}

//Se for char por exemplo: "char variavel" invez de int opção, os cases seriam "case 'a':", "case 'b':", etc. 

//O switch é uma alternativa ao uso de múltiplos if-else, tornando o código mais organizado e legível quando há muitas opções a serem verificadas.

//tenho que me acostumar com isso, pois me acostumei um pouco com if, else e else if.