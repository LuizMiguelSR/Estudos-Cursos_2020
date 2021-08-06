#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int users[5] = {10, 20, 30, 40, 50}; //aqui é feito o armazenamento das variáveis, se houver menos valores o vetor completará com valor "0" e se houver mais valores o vetor não irá armazenar
    
    for(int i = 0; i < 5; i++) {
        printf("%d\n", users[i]);
    }
    return 0;
}
