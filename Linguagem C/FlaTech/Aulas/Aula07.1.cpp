#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"portuguese");
    int dia;
    printf("\nDOM=1\tSEG=2\tTER=3\tQUA=4\tQUI=5\tSEX=6\tSAB=7\tN�O SABER=0");
    printf("\nDigite o dia da semana em que voc� vai come�ar as atividades: ");
    scanf("%i",&dia);
    switch(dia)
    {
    	case 0: //cada case segue de dois pontos
    		printf("\nSe informe com seu superior o dia que vai a come�ar as atividades");
    	break; //para o comando e sempre usa ponto e v�rgula
    	case 1:
    		printf("\nVoc� trabalha domingo");
    	case 2:
    		printf("\nVoc� trabalha segunda");
    	case 3:
    		printf("\nVoc� trabalha ter�a");
    	case 4:
    		printf("\nVoc� trabalha quarta");
    	case 5:
    		printf("\nVoc� trabalha quinta");
    	case 6:
    		printf("\nVoc� trabalha sexta");
    	case 7:
    		printf("\nVoc� trabalha s�bado");
    	break;
    	default: // cai nesta op��o quando nenhum dos casos forem mencionados
    		printf("\nValor invalido digite um n�mero referente aos dias da semana ou 0 para caso n�o saiba");
    	break;
	}
getchar();
printf("\n\n");
system("pause");
return(0);    
}
