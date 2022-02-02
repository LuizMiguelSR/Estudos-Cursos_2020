#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    float sal, nsal=0;
    printf("Digite o seu salário: ");
    scanf("%f", &sal);
    if (sal <= 500.00) {
        nsal = sal * 1.50;
        printf("Seu novo salário é R$ %.2f", nsal);
    } else if (sal > 500.00 && sal <= 700.00) {
        nsal = sal * 1.40;
        printf("Seu novo salário é R$ %.2f", nsal);
    } else if (sal > 700.00 && sal <= 800.00) {
        nsal = sal * 1.30;
        printf("Seu novo salário é R$ %.2f", nsal);
    } else if (sal > 800.00 && sal <= 1000.00) {
        nsal = sal * 1.20;
        printf("Seu novo salário é R$ %.2f", nsal);
    } else if (sal > 1000.00 && sal <= 1200.00) {
        nsal = sal * 1.10;
        printf("Seu novo salário é R$ %.2f", nsal);
    } else {
        nsal = sal * 1.05;
        printf("Seu novo salário é R$ %.2f", nsal);
    }
    return 0;
}