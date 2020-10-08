#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
{
    float a=6.8, b=5.5, c=8.3, med;
    med=((a*2)+(b*3)+(c*5))/10;
    printf("A média do aluno foi %.2f ",med);
    setlocale(LC_ALL,"portuguese");
getchar();
printf("\n\n");
system("pause");
return(0);    
}
