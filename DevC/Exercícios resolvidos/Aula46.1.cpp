#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
/*Elabore um programa em linguagem C que leia a idade de duas pessoas e imprima os dados da pessoa mais velha.*/
{
setlocale(LC_ALL,"portuguese");
    system("cls");
    int i1, i2;
    printf("Digite a idade das pessoas 1 e 2: \n");
    scanf("%i %i",&i1,&i2);
    if (i1>i2) {
        printf("A pessoa 1 é a mais velha com idade de %i",i1);
    }
    else if (i1 < i2){
        printf("A pessoa 2 é a mais velha com idade de %i",i2);
    } 
    else {
        printf("Ambos tem a mesma idade de %i",i1);
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}