#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"portuguese");
    /*int a,b,c=10;
    a=b=c;
    printf("%i %i %i",a,b,c)
    int a=10;
    printf("%i\n%i\n%i\n%i\n%i",a+2,a-2,a*2,a/2,a%3);	<- múltiplas operações dentro de um printf
    int a,b,c;											<- leitura em int = inteiro
    scanf("%i %i %i",&a,&b,&c);
    printf("Os valores são %i %i %i",a,b,c);
    float a;
    scanf("%f",&a);
    printf("Os valores são %2.2f",a); //2.2 delimita o numero de casa antes e depois da vírgula
    char l[1];
    scanf("%s",&l);
    printf("%s",l);*/
    int a,b,c;
    a=b=c=210;
    scanf("%i",&b);
    printf("A= %i\nB = %i\nC = %i",a,b,c);
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}
