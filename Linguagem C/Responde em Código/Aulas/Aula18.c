#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    system("cls");
    setlocale(LC_ALL,"");
    int num;
    printf("\n Informe um número: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("\n Número PAR!");
    } else {
        printf ("\n Número ÍMPAR!");
    }
    return 0;
}