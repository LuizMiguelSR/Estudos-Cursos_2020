/*Dados dois vetores de 10 elementos, crie um programa em C que calcule o seu produto escalar. O produto escalar de dois vetores v1 e v2 é dado por:  
P = v1[1]*v2[1]+ v1[2]*v2[2]+ ... +v1[10]*v2[10]*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int veta[10], vetb[10], p=0;
    for(int i = 0; i < 10; i++){
        cout << "Digite o valor do vetor A e vetor B na " << i+1 <<"º posição: ";
        cin >> veta[i] >> vetb[i];
        p+=veta[i]*vetb[i];
    }
    cout << "O produto escalar dos dois vetores é = " << p << endl;
    return 0;
}