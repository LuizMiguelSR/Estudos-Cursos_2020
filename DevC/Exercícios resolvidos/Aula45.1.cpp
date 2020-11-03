#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
/*O sistema de avaliação de determinada disciplina é composto por 
três provas. A primeira prova tem peso 2, a segunda 
tem peso 3 e a terceira tem peso 5. Considerando que a 
média para aprovação é 7.0, faça um programa em linguagem C 
para calcular a média final de um aluno desta disciplina e dizer 
se o aluno foi aprovado ou não.*/
{
setlocale(LC_ALL,"portuguese");
    system("cls");
    float n1, n2, n3, media;
    printf("Digite as notas do aluno: \n");
    scanf("%f %f %f", &n1, &n2, &n3);
    media=((n1*2)+(n2*3)+(n3*5))/10;
    if (media >= 7.0) {
        printf("Com média %.2f O aluno foi Aprovado",media);
    }
    else {
        printf("Com média %.2f O aluno foi Reprovado",media);
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}
