#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Faça um algoritmo que calcule a média aritmética das 3 notas dos 
25 alunos de uma classe. O algoritmo deverá, além de calcular a 
média das notas, indicar se cada aluno está aprovado ou não 
considerando 7,0 como média de aprovação.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i; 
    float n1, n2, n3, med;
    for (i=1;i<3+1;i++){
        printf("Digite as notas do %iº aluno: \n", i);
        scanf(" %f %f %f", &n1, &n2, &n3);
        med = (n1+n2+n3)/3;
        if (med >= 7.0) {
            printf("O aluno %i está APROVADO!\n", i);
        } else {
            printf("O aluno %i está REPROVADO!\n", i);
        }
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}