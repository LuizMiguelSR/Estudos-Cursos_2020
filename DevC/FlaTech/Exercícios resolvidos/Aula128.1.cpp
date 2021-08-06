/*Reescreva o programa em C abaixo usando o comando switch-case:
#include
 stdio.h
void main(void){
   float valor1,valor2;
   char operador;
   printf(?Entre com a expressão : \n?);
   scanf(?%f %c %f ?, &valor1, &operador, &valor2);
   if(operador == ?+?)
      printf(?Resultador : %.2f\n?,valor1+valor2);
   else 
      if (operador == ?-?)
         printf(?Resultador : %.2f\n?,valor1-valor2);
      else 
         if (operador == ?*?)
            printf(?Resultador : %.2f\n?,valor1*valor2);
         else 
            if (operador == ?/?)
               printf(?Resultador : %.2f\n?,valor1/valor2);
            else 
               printf(? Operador desconhecido\n?);
}*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float n1, n2, res;
    char op;

    cout<<"Digite a expressão: \n";
    cin>>n1>>op>>n2;

    switch (op)    {
    case '*':
        res = n1 * n2;
        cout<<"\nO resultado da expressão é "<<res;
        break;
    case '+':
        res = n1 + n2;
        cout<<"\nO resultado da expressão é "<<res;
        break;
    case '-':
        res = n1 - n2;
        cout<<"\nO resultado da expressão é "<<res;
        break;
    case '/':
        res = n1 / n2;
        cout<<"\nO resultado da expressão é "<<res;
        break;            
    default:
        cout<<"\nValor desconhecido";
        break;
    }

    return 0;
}