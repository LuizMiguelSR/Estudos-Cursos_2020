#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int option = 0;

    do {
        printf("\n---------Menu----------\n");
        printf("\n| 1 para Adi��o");
        printf("\n| 2 para Subtra��o");
        printf("\n| 3 para Multiplica��o");
        printf("\n| 4 para Divis�o");
        printf("\n| 5 para Sair\n");
        scanf("%d", &option);
    } while (option != 5);
    
    return 0;
}
