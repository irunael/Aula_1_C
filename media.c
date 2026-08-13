#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media_final;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media_final = (nota1 + nota2 + nota3) / 3;

    printf("A média final foi de: %.2f", media_final);

    return 0;

}