#include <stdio.h>

int main(){
    int num1 = 20, num2 = 20;
    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2); //Utilizando o operador ternário para verificar qual número é maior e armazenando o resultado na variável "maior".
    
    if (num1 > num2) {
        printf("O número %d é maior que o número %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("O número %d é maior que o número %d\n", num2, num1);
    } else {
        printf("Os números são iguais\n");
    }

    return 0;
}