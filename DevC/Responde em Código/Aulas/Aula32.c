#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");

    int i;
    for (i=1;i<100+1;i++) {
        if (i%2==0) {
            printf("O n�mero %i � PAR!\n", i);
        }
    }

    return 0;
}