/*O n�mero 3025 possui a seguinte caracter�stica: 30 + 25 = 55   ...  55*55 = 3025. Fa�a um programa em C para obter todos os n�meros de 4 algarismos com a mesma caracter�stica do n�mero 3025.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    int i, t1, t2, t3;

    for(i=1000; i <= 9999; i++){
        t1 = i/100;
        t2 = i%100;
        t3 = t1+t2;
        
        if(t3*t3==i){
            cout<<"\nN�mero "<<i;
        } else {
            
        }
    }
    return 0;
}