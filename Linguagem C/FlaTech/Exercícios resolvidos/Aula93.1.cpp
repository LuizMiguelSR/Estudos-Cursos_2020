#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <locale.h>
/*Fa�a um programa em C que leia v�rios n�meros inteiros e calcule o somat�rio dos n�meros positivos. O fim da leitura ser� indicado pelo n�mero 0.*/
int main () {
    setlocale(LC_ALL,"");
    system ("cls");

    int n, som=0;

    do {
        printf("Digite um n�mero: ");
        scanf("%d", &n);
        if (n%2==0) {
            som = som + n;
        } else {

        }
    } while (n!=0);

    printf("O total da soma dos n�meros positivos foi igual a %d\n", som);
    
system("pause");
return 0;
}