#include <stdio.h>

int main(){
    int a, b, c, s, res, div;
    a = 10;
    b = 25;
    c = 8;
    res = a - c;
    s = res * b;
    div = s % c;
    print("\nO resto da divisão entre os valores %d e %d = %d", s, c, div);

    return 0;
}