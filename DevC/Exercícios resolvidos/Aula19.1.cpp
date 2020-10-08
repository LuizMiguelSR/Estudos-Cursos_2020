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
    int t1, n1, n2;
    printf("Informe a tabuada que deseja contar: ");
    scanf("%i",&n1);
    for(t1=1;t1<=10;t1++)
    {
    	n2=n1*t1;
    	printf("\n%i X %i = %i",n1,t1,n2);
	}
getchar();
printf("\n\n");
system("pause");
return(0);    
}
