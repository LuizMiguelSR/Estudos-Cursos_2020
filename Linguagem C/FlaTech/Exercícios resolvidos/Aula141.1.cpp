/*Supondo que a população de um país A seja da ordem de 9.000.000 de habitantes com uma taxa anual de crescimento de 3% e que a população de um país B seja, aproximadamente, de 20.000.000 de habitantes com uma taxa anual de crescimento de 1,5%, crie um programa em C que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas essas taxas de crescimento.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");
    int c=0;
    float a=9000000, b=20000000;
    while(a<b){
        c++;
        b*=1.015;
        a*=1.03;        
    }
    cout<<"O país A passará o país B em "<<c<<" anos.";
    return 0;
}