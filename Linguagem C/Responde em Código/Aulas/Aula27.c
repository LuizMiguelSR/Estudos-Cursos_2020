#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    int n1 = 10, n2 = 0;
    printf("N1 = %d\n", n1);
    n2 = n1++;
    printf("N2 = %d\n", n2);
    printf("N1 = %d\n", n1);
    return 0;
}
