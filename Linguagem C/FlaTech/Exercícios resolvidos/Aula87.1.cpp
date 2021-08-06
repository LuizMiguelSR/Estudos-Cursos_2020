#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Foi realizada uma pesquisa entre os habitantes de uma dada região. Foram recolhidos os dados de idade, sexo (M/F) e salário de 100 habitantes. Construa um algoritmo que informe:
	- a média de salário do grupo;
	- maior e menor idade do grupo;
	- quantidade de mulheres com salário até R$500,00.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, ida, mai, men, cont=0;
    float sal, med, som=0;
    char sex;

    for (i=1;i<5+1;i++) {
        printf("\nQual é seu sexo? ");
        scanf("%c", &sex);
        setbuf(stdin,NULL);
        printf("\nQual a sua idade? ");
        scanf("%i", &ida);
        setbuf(stdin,NULL);
        printf("\nQuanto você ganha? R$ ");
        scanf("%f", &sal);
        setbuf(stdin,NULL);
        som = som + sal;
        if (i==1) {
            mai = ida;
            men = ida;
        } else {
            if (ida > mai) {
                mai = ida;
            }
            if (ida < men) {
                men = ida;
            }
        }
        if (sex=='F' && sal <= 500) {
            cont = cont + 1;
        }
    }
    med = som / 5;
    printf("A média de salário é de R$ %f\n", med);
    printf("A maior idade é de %i anos\n", mai);
    printf("A menor idade é de %i anos\n", men);
    printf("A quantidade de mulheres que ganham até R$ 500,00 é de %i\n", cont);
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}