/*O número 3025 possui a seguinte característica: 30 + 25 = 55   ...  55*55 = 3025. Faça um programa em C para obter todos os números de 4 algarismos com a mesma característica do número 3025.*/
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
            cout<<"\nNúmero "<<i;
        } else {
            
        }
    }
    return 0;
}