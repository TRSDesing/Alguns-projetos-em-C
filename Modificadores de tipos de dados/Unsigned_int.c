#include <stdio.h>

int main(){
    int numeroSinal = 3000000000; //O valor passou do limite do int, que é 2147483647.
    unsigned int numeroSemSinal = 3000000000; //O valor do unsigned int é o dobro do int, então ele suporta até 4294967295, por isso o valor é aceito.

    printf("Numero com sinal: %d\n", numeroSinal);
    printf("Numero sem sinal: %u\n", numeroSemSinal); //%u para unsigned int

    return 0;
}