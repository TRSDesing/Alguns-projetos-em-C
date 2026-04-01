#include <stdio.h>

int main(){
    short int numeroPequeno = 32767; //O valor máximo do short int, que é 32767.
    printf("Numero pequeno: %d\n", numeroPequeno); //%d para short int, pois o "d" é para int, e o short int é tipo o int.

    numeroPequeno = 32768; //O valor do é maior que o limite do short int, por isso ele vai "estourar", -32768.
    printf("Numero pequeno atualizado: %d\n", numeroPequeno);

    return 0;

}