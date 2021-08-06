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
   float sand, queijo=0.100, queijot, presunto=0.050, presuntot, carne=0.100, carnet;
   printf("Quantos sanduíches você quer: ");
   scanf("%f",&sand);
   queijot=queijo*sand;
   presuntot=presunto*sand;
   carnet=carne*sand;
   printf("Para fazer %.0f sanduíches, precisa de %.3f Kg de queijo, %.3f Kg de presunto e %.3f Kg de carne",sand, queijot, presuntot, carnet);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
