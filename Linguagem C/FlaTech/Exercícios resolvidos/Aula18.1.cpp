#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"portuguese");
    float n1, n2, n3, n4;
    printf("Digite a quantidade de pães: ");
    scanf("%f",&n1);
    printf("Digite quantos litros de leite: ");
    scanf("%f",&n2);
    n3 = n1 * 0.25;
    n4 = n2 * 2.50;
    printf("O valor da compra de pães é de R$ %.2f\n",n3);
    printf("O valor do leite é de R$ %.2f\n",n4);
    printf("O total foi de R$ %.2f",n3+n4);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
