/* Deseja-se fazer uma pesquisa a respeito do consumo mensal de energia elétrica em uma determinada cidade. Para isso, são fornecidos o preço do kWh consumido, o número do consumidor, a quantidade de kWh consumidos durante o mês e o código do tipo de consumidor (0-residencial, 1-comercial, 2-industrial). Elabore um programa em C que leia os dados descritos acima, calcule e escreva:
- para cada consumidor, o total a pagar;
- o maior consumo verificado;
- o menor consumo verificado;
- o total do consumo para cada um dos três tipos de consumidores;
- a média geral de consumo;
Quando for digitado o número do consumidor igual a zero deve-se encerrar o programa.*/
#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    int codc=1, tipc, c=0, maic=0, menc=0;
    float qtdekwh, prekwh, total, somr=0, somc=0, somi=0, mai=0, men=0, media=0;

    while(codc!=0){
        cout<<"Código do consumidor: ";
        cin>>codc;
        if(codc == 0){
            break;
        } else {
            cout<<"Preço do kwh consumido: ";
            cin>>prekwh;
            cout<<"Qtde de kwh consumido: ";
            cin>>qtdekwh;
            cout<<"Tipo de consumidor (0-residencial, 1-comercial, 2-industrial): ";
            cin>>tipc;
            if(tipc == 0){
                somr+=qtdekwh;
            } else if(tipc == 1){
                somc+=qtdekwh;
            } else if(tipc == 2){
                somi+=qtdekwh;
            } else {
                cout<<"\nCódigo inválido repita a operação";
                break;
            }

            total = prekwh * qtdekwh;
            cout<<"\nTotal a pagar do consumidor "<<codc<<" é de R$ "<<fixed<<setprecision(2)<<total<<endl;
            if(c==1){
                mai = qtdekwh;
                men = qtdekwh;
            } else {
                if(qtdekwh>mai){
                    mai = qtdekwh;
                }
                if(qtdekwh<men){
                    men = qtdekwh;
                }
            }
            c++;
        }
    }
    cout<<"\nO maior consumo verificado: "<<mai<<fixed<<setprecision(2)<<"kwh";
    cout<<"\nO menor consumo verificado: "<<men<<fixed<<setprecision(2)<<"kwh";
    cout<<"\nO total do consumo residencial = "<<somr<<fixed<<setprecision(2)<<"kwh";
    cout<<"\nO total do consumo residencial = "<<somc<<fixed<<setprecision(2)<<"kwh";
    cout<<"\nO total do consumo residencial = "<<somi<<fixed<<setprecision(2)<<"kwh";
    media = (somr+somc+somi)/(float)c;
    cout<<"\nMédia de consumo = "<<fixed<<setprecision(2)<<media<<endl;
    
    return 0;
}