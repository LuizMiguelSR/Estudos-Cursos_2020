#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");

    int idade = 0, i;

    for (i=1;i<=3;i++) {
        
    print("\nInforme sua idade: ");
    scanf("%d", &idade);

        if (idade >= 18) {
            printf("\nMaior de idade\n");
        } else {
            printf("\nMenor de idade\n");
        } 
    }

    return 0;
}
