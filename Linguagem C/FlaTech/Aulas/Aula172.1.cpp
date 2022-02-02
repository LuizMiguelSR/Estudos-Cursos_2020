/*A melhor apresentação de como converter valores Positivos para Negativos e Negativos para Positivos. E também obter um valor absoluto de um valor original usando a função abs com a biblioteca math.h declarada.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
#include <math.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");

    int x=-21, y;
    y=abs(x);
    cout << x << endl;
    cout << y << endl;

    return 0;
}