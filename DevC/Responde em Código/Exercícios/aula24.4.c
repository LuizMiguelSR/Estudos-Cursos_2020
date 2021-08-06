#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");

    int cod;
    float qtde, total, pf;

    printf("Digite o código do produto: ");
    scanf("%d", &cod);
    printf("Digite a quantidade: ");
    scanf("%f", &qtde);

    if (cod >= 1 && cod <= 10) {
        total = 5.00 * qtde;
    } else if (cod >= 11 && cod <= 20) {
        total = 15.00 * qtde;
    } else if (cod >= 21 && cod <= 30) {
        total = 25.00 * qtde;
    } else if (cod >= 31 && cod <= 40) {
        total = 35.00 * qtde;
    } else {
        printf("Código inválido!\n");
    }

    printf("Valor da total da nota R$ %.2f\n", total);

    if (total <= 299.99) {
        pf = total * 0.95;
    } else if (total >= 300.00 && total < 500.00) {
        pf = total * 0.90;
    } else if (total >= 500.00 && total < 1000.00) {
        pf = total * 0.85;
    } else {
        pf = total * 0.80;
    }

    printf("Valor da total com desconto R$ %.2f\n", pf);

    return 0;
}