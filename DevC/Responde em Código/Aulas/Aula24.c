#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    float n1 = 0.0, n2 = 0.0;
    char op = ' ';
    printf("\n|-----------------------|");
    printf("\n|----- CALCULADORA -----|");
    printf("\n|-----------------------|");

    printf("\n|- Informe sua escolha -|");
    scanf(" %c", &op);

    if (op == '+' || op == '-' || op == '*' || op == '/') {
        printf("\nInforme o primeiro valor:");
        scanf("%f", &n1);

        printf("\nInforme o segundo valor:");
        scanf("%f", &n2);

        if (op == '+') {
            printf("\nResultado = %.2f", n1 + n2);
        } else if (op == '-') {
            printf("\nResultado = %.2f", n1 - n2);
        } else if (op == '*') {
            printf("\nResultado = %.2f", n1 * n2);
        } else {
            printf("\nResultado = %.2f", n1 / n2);
        }
    } else {
        printf("\nOperação inválida!");
    }
    return 0;
}