#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int res;
    res = ! (10 > 20);

    printf("\nResultado lógico: %d", res);

    return 0;
}