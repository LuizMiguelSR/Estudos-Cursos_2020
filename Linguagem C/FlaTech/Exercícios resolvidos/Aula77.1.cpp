#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Fa�a um algoritmo que calcule a m�dia aritm�tica das 3 notas dos 
25 alunos de uma classe. O algoritmo dever�, al�m de calcular a 
m�dia das notas, indicar se cada aluno est� aprovado ou n�o 
considerando 7,0 como m�dia de aprova��o.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i; 
    float n1, n2, n3, med;
    for (i=1;i<3+1;i++){
        printf("Digite as notas do %i� aluno: \n", i);
        scanf(" %f %f %f", &n1, &n2, &n3);
        med = (n1+n2+n3)/3;
        if (med >= 7.0) {
            printf("O aluno %i est� APROVADO!\n", i);
        } else {
            printf("O aluno %i est� REPROVADO!\n", i);
        }
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}