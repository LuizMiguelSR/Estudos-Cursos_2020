#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Crie um programa em C que leia v�rios n�meros inteiros e informe para cada n�mero lido se ele � positivo ou negativo. O fim da leitura ser� indicado pelo n�mero 0.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int n, i;

    while (n != 0) {
        printf("Digite um n�mero: ");
        scanf("%i", &n);
        if (n < 0) {
            printf("NEGATIVO\n");
        } else if (n > 0) {
            printf("POSITIVO\n");
        } else {
            printf("ENCERRANDO...\n");
        }
    }
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}