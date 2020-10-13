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
   float qm, qp, qa;
   printf("Digite a quantidade de alunos matriculados: ");
   scanf("%f",&qm);
   printf("Digite a quantidade de alunos presentes: ");
   scanf("%f",&qp);
   qa=(qp/qm)*100;
   printf("A porcentagem de alunos ausentes foi de %.0f%%",qa);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
