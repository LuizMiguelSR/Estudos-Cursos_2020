/*Foi feita uma pesquisa para determinar o �ndice de mortalidade infantil em um certo per�odo. Elabore um programa em C que leia a quantidade de crian�as nascidas no per�odo, o sexo de uma crian�a que morreu (0-masculino, 1-feminino) e o n�mero de meses que a crian�a viveu, calcule e imprima:
- a porcentagem de crian�as mortas no per�odo;
- a porcentagem de crian�as do sexo masculino mortas no per�odo;
- a porcentagem de crian�as que viveram 24 meses ou menos no per�odo.
A cada nova leitura deve-se perguntar ao usu�rio se ele deseja encerrar a entrada de dados ou n�o.*/
#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");
    int c=1, sex, mes;
    float pcm = 0.0, pcmm = 0.0, pcv = 0.0, cn, cmm=0, somm=0, som;

    cout<<"Crian�as nascidas: ";
    cin>>cn;
    while(c!=0){
        cout<<"\nSexo: ";
        cin>>sex;
        if(sex==1){
            cmm += 1;
        }
        cout<<"Quantos meses: ";
        cin>>mes;
        if(mes <= 24){
            somm += 1;
        }
        som += 1;
        cout<<"Quer continuar? ";
        cin>>c;
    }
    pcm = ((float)som / (float)cn) * 100;
    cout<<"\nA porcentagem de crian�as mortas no per�odo: "<<fixed<<setprecision(2)<<pcm<<"%";
    pcmm = ((float)cmm / (float)cn) * 100;
    cout<<"\nA porcentagem de crian�as masculinas mortas no per�odo: "<<fixed<<setprecision(2)<<pcmm<<"%";
    pcv = ((float)somm / (float)cn) * 100;
    cout<<"\nA porcentagem de crian�as que viveram 24 meses ou menos no per�odo: "<<fixed<<setprecision(2)<<pcv<<"%";
    
    return 0;
}