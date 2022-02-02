#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    system("cls");
    setlocale(LC_ALL,"");
    float n1 = 0.0, n2 = 0.0, n3 = 0.0, n4 = 0.0, med = 0.0;
    printf("Digite as notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    med = (n1+n2+n3+n4)/4;
    if (med >= 7.0 && med <= 10.0) {
        printf("APROVADO");
    } else if (med >= 4.0 && med < 7.0) {
        printf("RECUPERAÇÃO");
    } else if (med >= 0.00 && med < 4.0) {
        printf("REPROVADO");
    } else {
        printf("Nota inválida");
    }
    return 0;
}