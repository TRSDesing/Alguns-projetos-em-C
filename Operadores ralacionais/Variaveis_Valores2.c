#include <stdio.h>

int main(){
    float num1 = 10.2;
    int num2 = 10;

    printf("num1 > num2: %d\n", (int) num1 > num2); //(int) para que só pegue o numero inteiro.
    printf("num1 == num2: %d\n", (int) num1 == num2);

    return 0;
}