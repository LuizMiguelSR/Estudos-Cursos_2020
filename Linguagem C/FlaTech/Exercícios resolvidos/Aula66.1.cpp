#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* 
Faça um programa em linguagem C que simule um Menu de Opções, e que 
para cada uma das opções abaixo lidas, imprima as seguintes mensagens:
Opções Mensagens:
1 Executa a rotina de Inclusão de Alunos
2 Executa a rotina de Alteração de Alunos
3 Executa a rotina de Exclusão de Alunos
4 Executa a rotina de Consulta de Alunos
*/
{
    system("cls");
    int op;
    printf("Digite a opcao desejada: ");
    scanf("%i", &op);
    if (op == 1){
        printf("\nInclusao de Alunos");
    } else if (op == 2) {
        printf("\nAlteracao de Alunos");
    } else if (op == 3) {
        printf("\nExclusao de Alunos");
    } else if (op == 4) {
        printf("\nCunsulta de Alunos");
    } else {
        printf("\nCodigo incorreto");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}