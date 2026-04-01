#include <stdio.h>

int main(){

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura); //Pra digitar a temperatura.

    printf("Digite a umidade: ");
    scanf("%f", &umidade); //Pra digitar a umidade.

    printf("Digite o estoque: ");
    scanf("%u", &estoque); //Pra digitar o estoque.

    if (temperatura > 30){
        printf("A temperatura esta alta. \n");
    } else if (temperatura < 15){
        printf("A temperatura esta baixa. \n");
    } else {
        printf("A temperatura esta normal. \n");
    }

    if (umidade > 70){
        printf("A umidade esta alta. \n");
    } else if (umidade < 30){
        printf("A umidade esta baixa. \n");
    } else {
        printf("A umidade esta normal. \n");
    }

    if (estoque < estoqueMinimo){
        printf("O estoque esta baixo. \n");
    } else if (estoque > estoqueMinimo){
        printf("O estoque esta alto. \n");
    } else {
        printf("O estoque esta normal. \n");
    }

    return 0;
}