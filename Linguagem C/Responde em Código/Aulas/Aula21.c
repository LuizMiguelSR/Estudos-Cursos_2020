#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");

    char sexo;

    printf("\nInforme o seu sexo: [M/F]\n");
    scanf(" %c", &sexo);

    if (sexo == 'F' || sexo == 'f')
        printf("\nSexo Feminino!");
    else
        printf("\nSexo Masculino!");
    
    return 0;
}