#include <stdio.h>

int main(){

    float salario_minimo, salario_bruto, quantidade;

    printf("Digite qual o valor do salário minímo: ");
    scanf("%f", &salario_minimo);

    printf("Digite o valor de seu salário bruto: ");
    scanf("%f", &salario_bruto);

    quantidade = salario_bruto / salario_minimo;

    printf("A quantidade de salarios minímos que cabem no seu salário bruto é de: %.2f", quantidade);

    return 0;
}