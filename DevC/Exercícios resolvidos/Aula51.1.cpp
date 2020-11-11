#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/*Faça um programa em linguagem C que leia a matrícula, as quatro 
notas de um aluno na disciplina de Física, calcule a sua média anual 
e em seguida, diga qual foi o seu resultado, obedecendo os seguintes 
critérios:
Aprovado: média maior ou igual a 7,0
Recuperação: média igual ou maior que 3,5 e menor 7,0
Reprovado: média menor que 3,5.*/
{
    system("cls");
    float n1, n2, n3, n4, med;
    printf("Digite as notas do aluno na ordem: \n");
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    med = (n1+n2+n3+n4)/4;
    if (med>=7.00) {
        printf("Aprovado");
    }
    else if ((med >= 3.5) && (med < 7.00)) {
        printf("Em recuperacao");
    }
    else {
        printf("Reprovado");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}