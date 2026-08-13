#include <stdio.h>

int main(){

    float hora_dia, minutos_dia;

    printf("Que horas são agora? ");
    scanf("%f", &hora_dia);

    minutos_dia = hora_dia * 60;

    printf("A quantidade de minutos que ja se passou nesse dia foi de: %.2f", minutos_dia);

    return 0;

}