#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int option = 0;

    do {
        printf("\n---------Menu----------\n");
        printf("\n| 1 para Adição");
        printf("\n| 2 para Subtração");
        printf("\n| 3 para Multiplicação");
        printf("\n| 4 para Divisão");
        printf("\n| 5 para Sair\n");
        scanf("%d", &option);
    } while (option != 5);
    
    return 0;
}
