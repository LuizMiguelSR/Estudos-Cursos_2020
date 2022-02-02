#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");

    int option = 1;

    while (option != 0)
    {
        printf("\nOlá mundo!\n");

        printf("Digite 0 para sair e qualquer outro número para continuar: \n");
        scanf("%d", &option);
    }
    
    return 0;
}
