#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Construa um algoritmo que leia um conjunto de 20 n�meros inteiros e mostre qual foi o maior valor fornecido.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, n, mai=0, men=0;
    for (i=1;i<3+1;i++){
        printf("Digite um n�mero: ");
        scanf("%i", &n);
        if (i == 1) {
            mai = n;
            men = n;
        } else {
            if (n > mai) {
                mai = n;
            }
            if (n < men) {
                men = n;
            }
        }
    }
    printf("O maior n�mero foi: %i\n", mai);
    printf("O menor n�mero foi: %i\n", men);
getchar();
printf("\n\n");
system("pause");
return(0);    
}