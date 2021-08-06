#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    int op;
    printf("\n|------------------------------|");
    printf("\n|--------- CALCULADORA --------|");
    printf("\n|----- Digite 1 p/adição ------|");
    printf("\n|----- Digite 2 p/subtração ---|");
    printf("\n|-- Digite 3 p/multiplicação --|");
    printf("\n|----- Digite 4 p/divisão -----|");
    printf("\n|------------------------------|");

    printf("\n|---- Informe sua escolha -----|\n");
    scanf(" %d", &op);

    switch (op) {
        case 1:
            printf("\nAdição!");
            break;
        case 2:
            printf("\nSubtração!");
            break;
        case 3:
            printf("\nNultiplicação!");
            break;
        case 4:
            printf("\nDivisão!");
            break;
        default:
            printf("\nOpção inválida");
    }

    return 0;
}