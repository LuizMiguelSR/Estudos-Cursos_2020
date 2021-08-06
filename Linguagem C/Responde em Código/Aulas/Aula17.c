#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main () {
    int n1, n2;
    printf("\nInforme o primeiro valor: ");
    scanf("%d", &n1);
    printf("\nInforme o segundo valor: ");
    scanf("%d", &n2);

    printf("\n%d = %d ? %d", n1, n2, n1 == n2);
    printf("\n%d > %d ? %d", n1, n2, n1 > n2);
    printf("\n%d < %d ? %d", n1, n2, n1 < n2);
    printf("\n%d !=  %d ? %d", n1, n2, n1 != n2);
    printf("\n%d <=  %d ? %d", n1, n2, n1 <= n2);
    printf("\n%d >=  %d ? %d", n1, n2, n1 >= n2);

    return 0;
}