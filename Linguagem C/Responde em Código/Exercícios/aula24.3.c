#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    float alt=0.0, pes;
    char sex;
    printf("Digite o seu sexo [M/F]: ");
    scanf(" %c", &sex);
    printf("\nDigite a sua altura: ");
    scanf("%f", &alt);
    if (sex == 'm' || sex == 'M') {
        pes = (72.7*alt) - 58;
        printf("Seu peso ideal é: %.1f", pes);
    } else if (sex == 'f' || sex == 'F') {
        pes = (62.1*alt) - 44.7;
        printf("Seu peso ideal é: %.1f", pes);
    } else {
        printf("Comando inválido");
    }
    return 0;
}