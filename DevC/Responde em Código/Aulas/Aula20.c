#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    system("cls");
    setlocale(LC_ALL,"");

    int num;
    printf("\nIforme um número qualquer: ");
    scanf("\n%d", &num);

    if (num >= 0 && num <= 100) {
        printf("\nValor entre 0 e 100!\nNúmero digitado: %i", num);
    } else {
        printf("\nValor fora do desejado!");
    }
    return 0;
}