#include <stdio.h>

int main(){
    double numeroPreciso = 3.14159265358979323846; //O valor de pi, utilizando double para que o valor seja armazenado corretamente.
    long double numeroMuitoPreciso = 3.141592653589793238462643; //O valor de pi com mais casas decimais, utilizando long double para que o valor seja armazenado corretamente, mas é praticamente a mesma coisa que o double normal.

    printf("Numero preciso (double): %.15lf\n", numeroPreciso); //%.15lf para imprimir o double com 15 casas decimais.
    printf("Numero muito preciso (long double): %.21Lf\n", numeroMuitoPreciso); //%.21Lf para imprimir o long double com 21 casas decimais, e o "L" para indicar que é um long double.

    return 0;
}

//Dependendo da versão do gcc, o valor do long double pode não funcionar corretamente.