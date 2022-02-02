#include <stdio.h>
int main() {
    float a, b, res;
    printf("\nInforme dois valores: ");
    scanf("%f %f",&a,&b);
    res = a - b;
    printf("\nSubtração: %.2f", res);
    return 0;
}