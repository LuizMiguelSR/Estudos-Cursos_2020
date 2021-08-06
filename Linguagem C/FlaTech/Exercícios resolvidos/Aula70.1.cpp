#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Elabore um algoritmo que imprima todos os múltiplos de 4 
compreendidos entre 5 e 87.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i;
    for (i=5;i<87+1;i+=4){
        printf("\nMúltiplos de 4 %i",i);
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}