/*Desenvolva um programa em C que armazene o salário de 20 pessoas. Em seguida, calcule e armazene o novo salário de cada pessoa sabendo-se que o reajuste foi de 8%. Imprima ainda uma listagem numerada com o antigo e o novo salário de cada pessoa.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    float sala[20], saln[20], r = 1.08;
    for(int i = 0; i < 20; i++){
        cout << "Digite o salário da " << i+1 << "º pessoa: ";
        cin >> sala[i];
        saln[i] = sala[i] * r;
    }
    cout << "\nSalários antigos e novos\n";
    for(int i = 0; i < 20; i++){
        cout << "Salário antigo da " << i+1 << "º pessoa R$ " << fixed << setprecision(2) << sala[i] << endl;
        cout << "Salário reajustado da " << i+1 << "º pessoa R$ " << fixed << setprecision(2) << saln[i] << endl;
        cout << "\n";
    }
    return 0;
}