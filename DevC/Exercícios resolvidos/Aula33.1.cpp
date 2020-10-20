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
   float pesoa, pesoeng, pesoemg;
   printf("Digite seu peso atual: ");
   scanf("%f", &pesoa);
   pesoeng = pesoa * (1+0.15);
   pesoemg = pesoa * (1-0.20);
   printf("Seu peso ao engordar será de %.2f Kg\n", pesoeng);
   printf("Seu peso ao emagrecer será de %.2f Kg\n", pesoemg);   
getchar();
printf("\n\n");
system("pause");
return(0);    
}
