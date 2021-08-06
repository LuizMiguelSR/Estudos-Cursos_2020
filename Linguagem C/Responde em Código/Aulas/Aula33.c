#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int users[5];
    users[0] = 10; //aqui diz que a posição 0 vai ser atribuído 10
    users[1] = 20;
    users[2] = 30;
    users[3] = 40;
    users[4] = 50;
    
    printf("Primeiro elemento: %d", users[0]);
    return 0;
}
