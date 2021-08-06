#include <stdio.h>
int main() {
    char a, b;
    printf("\nDigite um caractere: ");
    scanf("%c", &a);

    printf("\nDigite outro caractere: ");
    //setbuf(stdin,NULL);
    fflush(stdin);
    scanf("%c", &b);

    printf("\nA = %c - B = %c",a,b);

    return 0;
}