#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    float values[10] = {20, -30, 50, 120, 89, 200, 100, 10, 500, -4};
    int index = 0;
    
    /*for (int i = 0; i < 10; i++) {
        printf("index: %d - valor: %.2f\n", i, values[i]);
    }*/

    /*while (index < 10 ) {
        if (values[index] >= 100) {
            printf("index: %d - valor: %.2f\n", index, values[index]);
        }
        index += 1;
    }*/

    do {
        if (values[index] < 100) {
            printf("index: %d - valor: %.2f\n", index, values[index]);
        }
        index += 1;
    } while (index < 10);
    
    return 0;
}
