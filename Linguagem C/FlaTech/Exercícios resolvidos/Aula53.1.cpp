#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* Elabore um programa em linguagem C que dada a idade de um nadador 
classifica-o em uma das seguintes categorias: 
infantil = 5 a 10 anos 
juvenil = 11 a 17 anos 
adulto =  maiores de 18 anos*/
{
    system("cls");
    int idade;
    printf("Digite a sua idade: \n");
    scanf("%i",&idade);
    if (idade>=5 && idade <= 10) {
        printf("Categoria infantil");
    } else if (idade >= 11 && idade <= 17) {
        printf("Categoria juvenil");
    } else if (idade >= 18) {
        printf("Categoria adulto");
    } else {
        printf("Nenhuama das categorias");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}