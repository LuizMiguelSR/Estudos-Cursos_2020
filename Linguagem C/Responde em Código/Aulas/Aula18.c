#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    system("cls");
    setlocale(LC_ALL,"");
    int num;
    printf("\n Informe um n�mero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("\n N�mero PAR!");
    } else {
        printf ("\n N�mero �MPAR!");
    }
    return 0;
}