#include <stdio.h>

int main(){

    int nota1, nota2, nota3; //São numeros inteiros
    float media; //Para que o resultado saia corretamente

    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3; //"(float)" para que o numero quebrado saia corretamente.

    printf("A média das notas é: %.2f", media);

    return 0;
}

//Se colocar numero quebrado nas notas, o codigo não vai funcionar corretamente,
//pois as notas são "int" (Confuso? Sim, mas entendivel de alguma maineira)