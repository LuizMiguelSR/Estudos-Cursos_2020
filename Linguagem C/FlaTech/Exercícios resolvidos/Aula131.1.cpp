/*Desenvolva um programa em linguagem C que calcule o valor de S a partir da seguinte expressão: 
S =  1 . +  2 . +  3 . +  4 . + ... +  50  .
 50  49  48  47      1*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float a=1, b=50, c, s=0;

    for(a=1; a<=50; a++){
        c=a/b;
        s=s+c;
        b--;
    }
    cout<<"Valor de S = "<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}