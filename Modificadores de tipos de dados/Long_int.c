#include <stdio.h>

int main(){
    int numeroNormal1 = 2147483647; //O valor máximo do int.
    long int numeroGrande = 2147483647; //O valor que excede o limite do int.

    numeroGrande = 2147483648; //O valor do numeroGrande é maior que o limite do int.

    printf("Numero normal: %d\n", numeroNormal1); //%d para int
    printf("Numero longo: %ld\n", numeroGrande); //%ld para long int, pois o "l" indica que é um long int.

    return 0;
}

//Dependendo da versão do gcc, o valor do long int pode não funcionar corretamente.