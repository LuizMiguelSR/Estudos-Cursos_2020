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
   float n1, n2, n3, md;
   printf ("Digite as notas do aluno: ");
   scanf("%f %f %f", &n1, &n2, &n3);
   md=(((n1*3)+(n2*3)+(n3*4))/10);
   printf ("A média do aluno foi %.1f",md);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
