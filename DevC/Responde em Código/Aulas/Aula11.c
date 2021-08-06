#include <stdio.h>

int main() {
    printf("%u", sizeof(float));
    printf("%u", sizeof(int));
    printf("%u", sizeof(double));

    typedef int inteiro;
    inteiro x = 10;
    int z = 11;

    printf("%d %d", x, z);

    return 0;
}