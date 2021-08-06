/*Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial, em gramas, faça um programa em C que determine o tempo necessário para que essa massa se torne menor do que 0,5 grama. O programa deve ainda escrever a massa inicial, final e o tempo calculado em horas, minutos e segundos.*/
#include <iomanip>
#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL,"");
    system("cls");

    float massa, gramas;
    int horas=3600, minutos=60, segundos=0, h, m, s;

    cout<<"Digite a quantidade de masssa do elemneto em gramas: ";
    cin>>gramas;

    massa = gramas;

    while (gramas >= 0.5) {
        segundos = segundos + 50;
        gramas = gramas  / 2;
    }

    h = segundos / horas;
    m = segundos / minutos;

    while(m >= 60) {
        h = h + 1;
        m = m - 60;
    }

    s = segundos % minutos;

    cout<<"\nMassa inicial = "<<fixed<<setprecision(2)<<massa<<endl;
    cout<<"Massa final = "<<fixed<<setprecision(2)<<gramas<<endl;
    cout<<"Tempo de processo = "<<h<<" horas, "<<m<<" minutos e "<<s<<" segundos."<<endl;


    return 0;
}