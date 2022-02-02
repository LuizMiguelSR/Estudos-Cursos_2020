#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    int idade  = 0;
    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    
    idade >= 18 ? printf("\nMaior de idade!") : printf("\nManor de idade!");
    
    return 0;
}