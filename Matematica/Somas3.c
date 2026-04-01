#include <stdio.h>

int main() {
    int num1 = 1;
    
    //É tipo um num1 = num1 + 1
    printf("Anter do incremento: %d\n", num1);
    num1 ++;
    printf("Depois do incremento: %d\n", num1);

    //É tipo um num1 = num1 - 1
    num1 --;
    printf("Depois do decremento: %d\n", num1);

    return 0;
}