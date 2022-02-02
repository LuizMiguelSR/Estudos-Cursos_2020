#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int idade;
    printf("\nInforme a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("\nMaior de idade!");
    }else{
        printf("\nMenor de idade!");
    }

    return 0;
}