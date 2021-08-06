#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* 
Faça um programa em linguagem C que leia três números (NUM1, NUM2, NUM3)
, uma opção e que imprima o valor da variável NUM1, se a opção lida 
for igual a 1; o valor da variável NUM2, se a opção lida for igual 
a 2; o valor da variável NUM3, se a opção lida for igual a 3. Os 
únicos valores possíveis para a variável opção são 1, 2 e 3.
*/
{
    system("cls");
    int n1=1, n2=2, n3=3, op;
    printf("Escolha uma das opções 1-2-3: ");
    scanf("%i", &op);

    if (op == 1){
        printf("O valor é %i",n1);
    } else if (op == 2) {
        printf("O valor é %i",n2);
    } else if (op == 3){
        printf("O valor é %i",n3);
    } else {
        printf("Código incorreto");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}