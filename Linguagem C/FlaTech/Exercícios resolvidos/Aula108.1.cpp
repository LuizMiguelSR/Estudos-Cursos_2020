#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main() {
    setlocale(LC_ALL,"");
    system("cls");

    float pe=0.0, som=0.0, res; 
    int cp;
    char op = 's';

    while (op == 's' || op == 'S') {
        cout<<"\nDigite o preço do produto: R$";
        cin>>pe;
        som = som + pe;
        cout<<"\nDeseja continuar [S/N]: ";
        cin>>op;
    }

    do {
        cout<<"\nEscolha uma condição de pagamento: ";
        cin>>cp;
        switch (cp) {
            case 1:
                res = som - (som*0.10);
            break;
            case 2:
                res = som - (som*0.05);
            break;
            case 3:
                res = som;
            break;
            case 4:
                res = som + (som*0.10);
            break;
            default:
                cout<<"\nOpção inválida! Digite novamente!\n";  
            break;
        }
    }  while (cp <= 0 || cp >= 5);
    cout<<"\nO valor da compra é R$"<<fixed<<setprecision(2)<<res<<endl;

    return 0;
}