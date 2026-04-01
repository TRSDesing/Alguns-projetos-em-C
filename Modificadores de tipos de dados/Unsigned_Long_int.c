#include <stdio.h>

int main(){
    unsigned long int numeroGrandepositivo = 4000000000; //O valor máximo do unsigned long int, que é o dobro do long int, então ele suporta até 4294967295.
    unsigned int numeroPositivo = 4000000000;
    long int numeroGrande = 4000000000; 
    int numero = 4000000000; //O valor do int suporta até 2147483647, por isso o valor é aceito.

    printf("Numero com sinal: %d\n", numero); //%d para int
    printf("Numero longo: %ld\n", numeroGrande); //%ld para long int
    printf("Numero sem sinal: %u\n", numeroPositivo); //%u para unsigned int
    printf("Numero sem sinal grande: %lu\n", numeroGrandepositivo); //%lu para unsigned long int, pois o "l" indica que é um long int, e o "u" indica que é unsigned.

    return 0;
}

//Dependendo da versão do gcc, o valor do unsigned long int pode não funcionar corretamente.