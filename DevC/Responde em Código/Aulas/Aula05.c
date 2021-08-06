#include <stdio.h>

int main() {

    float altura;
    char sexo;
    int idade;

    printf("\nInforme seu sexo [M/F]: ");
    scanf("%c",&sexo);

    printf("\nDigite sua idade: ");
    scanf("%i",&idade);

    printf("\nInforme sua altura: ");
    scanf("%f",&altura);

    printf("\nSeu sexo = %c altura %.2f idade %d", sexo,altura,idade);


    return 0;
}