#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Escreva um algoritmo que leia 10 valores inteiros e positivos e:   
- encontre o maior valor;
- encontre o menor valor;
- calcule a m�dia dos n�meros lidos.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, n, mai=0, men=0, som=0; 
    float med;
    for (i=1;i<3+1;i++){
        printf("Digite umn�mero: ");
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
        som = som + n;
    }
    med = som / 3;
    printf("O maior n�mero foi: %i\n", mai);
    printf("O menor n�mero foi: %i\n", men);
    printf("A m�dia foi: %.2f\n", med);
getchar();
printf("\n\n");
system("pause");
return(0);    
}