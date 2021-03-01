#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <locale.h>
/*Faça um programa em C que leia vários números inteiros e calcule o somatório dos números positivos. O fim da leitura será indicado pelo número 0.*/
int main () {
    setlocale(LC_ALL,"");
    system ("cls");

    int n, som=0;

    do {
        printf("Digite um número: ");
        scanf("%d", &n);
        if (n%2==0) {
            som = som + n;
        } else {

        }
    } while (n!=0);

    printf("O total da soma dos números positivos foi igual a %d\n", som);
    
system("pause");
return 0;
}