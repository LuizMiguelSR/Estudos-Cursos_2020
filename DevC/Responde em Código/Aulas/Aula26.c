#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");

    char sexo = ' ';

    printf("\nInforme o seu sexo --> [F/M]: ");
    sexo = getchar();

    switch (sexo) {
        case 'f':
        case 'F':
            printf("\nFeminino!");
            break;
        case 'm':
        case 'M':
            printf("\nMasculino!");
            break;    
        default:
            printf("\nOpção inválida!");
            break;
    }

    return 0;
}