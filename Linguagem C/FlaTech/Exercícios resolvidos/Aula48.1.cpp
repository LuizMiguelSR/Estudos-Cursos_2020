#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/*Segundo uma tabela médica, o peso ideal está relacionado com a
 altura e o sexo da pessoa. Elabore um programa em linguagem C que 
 leia a altura e o sexo de uma pessoa, calcule e imprima seu peso 
 ideal, utilizando as seguintes fórmulas.
Para homens :  (72,7 * altura) – 58
Para mulheres :  (62,1 * altura) – 44,7*/
{
    system("cls");
    float pes, alt, med, med1;
    char sex;
    printf("Digite seu sexo [m/f]: \n");
    scanf("%c",&sex);
    printf("Digite sua altura: \n");
    scanf("%f",&alt);
    if (sex=='m') {
        med=(72.7*alt)-58;
        printf("O seu peso ideal e de %.3f",med);
    }
    else if (sex=='f') {
        med1=(62.1*alt)-44.7;
        printf("O seu peso ideal e de %.3f",med1);
    }
    else
    {
        printf("Letra invalida");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}