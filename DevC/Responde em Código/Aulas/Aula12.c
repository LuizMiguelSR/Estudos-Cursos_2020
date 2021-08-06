#include <stdio.h>
#include <conio.h>

int main() {
    char a, b, c;
    //getch(); getchar(); getche();
    printf("\nDigite um caractere: ");
    a = getch();
    printf("\n------- leitura getch ---------\n");
    printf("%c", a);

    printf("\nDigite um caractere: ");
    b = getche();
    printf("\n------- leitura getche ---------\n");
    printf("%c", b);

    printf("\nDigite um caractere: ");
    c = getchar();
    printf("\n------- leitura getchar ---------\n");
    printf("%c", c);

    return 0;
}