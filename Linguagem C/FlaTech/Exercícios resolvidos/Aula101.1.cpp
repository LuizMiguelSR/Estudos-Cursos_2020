#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;
/*O card�pio de uma lanchonete � o seguinte: 
Especifica��o C�digo Pre�o
	- Cachorro quente 100 1,20
	- Bauru simples 101 1,30
	- Bauru com ovo 102 1,50
	- Hamb�rger 103 1,20
	- Cheeseburguer 104 1,30
	- Refrigerante 105 1,00
Escreva um programa em C que leia o c�digo do item pedido e a quantidade at� que seja digitado um c�digo inexistente; e calcule o valor a ser pago pelo pedido completo.*/
int main () {
    setlocale(LC_ALL,"");
    system("cls");

    int cod, qtde; 
    float val;

    do {
        cout<<"\nDigite o c�digo do item: ";
        cin>>cod;

        switch (cod) {
        case 100:
            cout<<"\nDigite a quantidade: ";
            cin>>qtde;
            val = val + (1.20*qtde);
            break;
        case 101:
            cout<<"\nDigite a quantidade: ";
            cin>>qtde;
            val = val + (1.30*qtde);
            break;
        case 102:
            cout<<"\nDigite a quantidade: ";
            cin>>qtde;
            val = val + (1.50*qtde);
            break;
        case 103:
            cout<<"\nDigite a quantidade: ";
            cin>>qtde;
            val = val + (1.20*qtde);
            break;
        case 104:
            cout<<"\nDigite a quantidade: ";
            cin>>qtde;
            val = val + (1.30*qtde);
            break;
        case 105:
            cout<<"\nDigite a quantidade: ";
            cin>>qtde;
            val = val + (1.00*qtde);
            break;
        default:
            break;
        }

    } while (cod >= 100 && cod <= 105);

    cout<<"\nValor da compra foi de R$ "<<fixed<<setprecision(2)<<val<<endl;
    return 0;
}