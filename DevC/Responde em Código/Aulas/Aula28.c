#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    int number = 10;
    number += 20;
    print("Valor: %d\n", number);
    return 0;
}
