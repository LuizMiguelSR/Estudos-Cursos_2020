/* Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto, crie um programa em C que leia o nome, o pre�o de compra e o pre�o de venda de uma mercadoria e determine se ela proporciona:
-  lucro menor que 10%
- 10% maior ou igual LUCRO menor ou igual 20%
- lucro maior que 20%*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    //system("cls");

    float pc, pv, m = 1, l, l1=0, l2=0, l3=0, c=1;

    

    while (c != 0) {
        
        if (c != 0) {
            cout<<"\nDigite o preço de compra da "<<m<<"º mercadoria R$ ";
            cin>>pc;
            cout<<"\nDigite o preço de venda da "<<m<<"º mercadoria R$ ";
            cin>>pv;
            l = ((pv - pc) / pc) * 100;
            m++;
            if (l < 10) {
                l1++;
            } else if (l <= 20) {
                l2++;
            } else {
                l3++;
            }
        } else {
            cout<<"\nExibindo os resultados...";
        }
        cout<<"\nDigite 0 para encerrar ou 1 para continuar: ";
        cin>>c;
    }

    cout<<"\n"<<l1<<" mercadorias que deram menos que 10 porcento de lucro";
    cout<<"\n"<<l2<<" mercadorias que deram maior ou igual que 10 porcento e menos ou igual que 20 porcento de lucro";
    cout<<"\n"<<l3<<" mercadorias que deram mais que 20 porcento de lucro";

    return 0;
}