#include <stdio.h>
#include <conio.h>

int main() {
    system("cls");
    char teste;
    printf("\nDigite uma letra: ");
    teste = getchar();
    printf("\nCaractere digitado = %c -  na tabela ascii %d", teste,teste);
    return 0;
}